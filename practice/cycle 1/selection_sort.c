#include <stdio.h>

int main() {
    int arr[5] = {-1, -2, -3, 10, 5};

    for (int i = 0; i < 5; i++) {
        printf ("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < 4; i++) {
        for (int j = i+1; j < 5; j++) {
            if (arr[i] > arr[j]) { 
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf ("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}