#include <stdio.h>

int find_index_interpolation (int max, int min, int n, int data) {
    return n * (data - min) / (max - min);
}

int main() {
    int arr[10] = {-1, 0, 1, 2, 3, 4, 5, 6, 7, 8};
    int n = 10, max = 8, min = -1, data = 7;
    
    printf ("interpolation search result : %d\n", find_index_interpolation(max, min, n, data));

    for (int i = 0; i < n; i++) {
        if (arr[i] == data) {
            printf ("linear search result : %d\n", i);
        }
    }

    return 0;
}
