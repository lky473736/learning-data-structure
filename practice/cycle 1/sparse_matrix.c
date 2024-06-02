#include <stdio.h>
#include <stdlib.h>

int main() {
    int sparse_matrix[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, -5, 0},
        {9, 0, 1, 0, 0, 0, 0, 8, 0, -10},
        {3, 0, 0, 0, 7, 0, 0, 5, 5, 0},
        {3, 4, 0, 0, 8, 0, 0, 0, 5, 0},
        {7, 0, 0, 0, 2, 5, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 1, 10},
        {0, 0, 0, 0, 8, 0, 9, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {8, 6, 0, 0, 4, 0, 10, 0, 0, 10},
        {9, 0, 0, 6, 0, 3, 0, 0, 3, 4}
    };

    int cnt = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (sparse_matrix[i][j] != 0) {
                cnt += 1;
            }
        }
    }

    int **arr = (int **) malloc (sizeof(int *) * (cnt + 1));
    for (int i = 0; i < cnt + 1; i++) {
        arr[i] = (int *) malloc (sizeof(int) * 3);
    }

    arr[0][0] = 10;
    arr[0][1] = 10;
    arr[0][2] = cnt;

    printf ("%d %d %d\n", arr[0][0], arr[0][1], arr[0][2]);

    int c = 1;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (sparse_matrix[i][j] != 0) {
                printf ("%d \t", c);
                arr[c][0] = i;
                arr[c][1] = j;
                arr[c][2] = sparse_matrix[i][j];

                printf ("%d %d %d\n", arr[c][0], arr[c][1], arr[c][2]);
                c++;
            }
        }
    }
    
    return 0;
}