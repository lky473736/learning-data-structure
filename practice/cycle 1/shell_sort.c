#include <stdio.h>

int main() {
    int arr[5] = {-1, -2, -3, 10, 5};

    for (int i = 0; i < 5; i++) {
        printf ("%d ", arr[i]);
    }
    printf("\n");

    int h = 5/2 + 1;

    while (h > 0) {
        for (int i = h; i < 5; i++) {
            if (arr[i-h] > arr[i]) {
                int temp = arr[i-h];
                arr[i-h] = arr[i];
                arr[i] = temp;
            }
        }

        if (h < 3) {
            h--;
        }

        else {
            h = h/2 + 1;
        }
    }

    for (int i = 0; i < 5; i++) {
        printf ("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}