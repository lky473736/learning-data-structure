#include <stdio.h>

int main() {
    int arr[5] = {-1, -2, -3, 10, 5};
    int temp;

    for (int i = 0; i < 5; i++) {
        printf ("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 1; i < 5; i++) {
        temp = arr[i];

        for (int j = i-1; j >= 0; j--) {
            if (arr[j] > temp) {
                arr[j+1] = arr[j];
                arr[j] = temp;
            }

            else {
                arr[j+1] = temp;
                break;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf ("%d ", arr[i]);
    }
    printf("\n");
}