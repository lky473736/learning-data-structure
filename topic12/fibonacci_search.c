#include <stdio.h>
#include <stdbool.h>

int* fibonacci (int num) {
    static int arr[100];

    int n1 = 0, n2 = 1;
    arr[0] = n1;
    arr[1] = n2;

    int i = 2;

    while (i <= num) {
        arr[i] = arr[i-1] + arr[i-2];
        i++;
    }

    return arr;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int data = 6;
    int *fibo = fibonacci(10);
    int i, j, p, q;

    while (true) {
        if (fibo[j] > 10 && j > 2) {
            int F_k = fibo[j]; // F_k
            i = fibo[j-1];
            p = fibo[j-2]; // F_(k-1)
            q = fibo[j-3]; // F_(k-2)
            break;
        }

        j++;
    }

    while (true) {
        printf ("i, p, q : %d %d %d\n", i, p, q);

        if (arr[i] == data) {
            printf ("%d\n", i);
            break;
        }

        else {
            if (arr[i] < data) {
                i = i + q;
                p = p - q;
                q = q - p;
            }

            else {
                if (j == 0) {
                    i = 0;
                    continue;
                }

                j--;
                i = fibo[j-1];
                p = fibo[j-2];
                q = fibo[j-3];
            }
        }
    }

    return 0;
}