#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int start = 0, end = 9, mid, data = 6;

    while (start <= end) {
        mid = (start + end) / 2;

        if (arr[mid] == data) {
            printf ("%d", mid);
            break;
        }

        if (arr[mid] < data) {
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }
    }

    return 0;
}