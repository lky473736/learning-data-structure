#include <stdio.h>
int arr[5] = {-1, -2, -3, 10, 5};

void q_s (int start, int last) {
    if (start < last) {
        int i = start, j = last;
        int pivot = arr[start];
        
        while (i < j) {
            while (i < j && arr[j] >= pivot) j--;
            while (i < j && arr[i] <= pivot) i++;
            if (i < j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        arr[start] = arr[i];
        arr[i] = pivot;

        q_s(start, i - 1);
        q_s(i + 1, last);
    }
}

int main() {
    for (int i = 0; i < 5; i++) {
        printf ("%d ", arr[i]);
    }
    printf("\n");

    q_s (0, 4);

    for (int i = 0; i < 5; i++) {
        printf ("%d ", arr[i]);
    }
    printf("\n");
}