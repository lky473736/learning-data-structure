#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int low = 0, high = 4, mid, data = 5;

    while (low <= high) {
        mid = (low + high) / 2;
        
        if (data == a[mid]) {
            printf ("%d\n", mid);
            break;
        }

        else {
            if (data < a[mid]) {
                high = mid - 1;
            }

            else {
                low = mid + 1;
            }
        }
    }

    if (data != a[mid]) {
        printf ("not found\n");
    }

    return 0;
}