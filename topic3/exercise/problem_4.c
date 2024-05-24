#include <stdio.h>

int main() {
    int arr[2][2] = {1, 2, 3, 4};

    /*
        1, 2
        3, 4
    */

   int transpose[2][2];

   for (int i = 0; i < 2; i++) { 
        for (int j = 0; j < 2; j++) {
            transpose[i][j] = arr[j][i];
            transpose[j][i] = arr[i][j];
        }
   }

   for (int i = 0; i < 2; i++) { 
        for (int j = 0; j < 2; j++) {
            printf ("%d ", arr[i][j]);
        }

        printf ("\n");
   }

   for (int i = 0; i < 2; i++) { 
        for (int j = 0; j < 2; j++) {
            printf ("%d ", transpose[i][j]);
        }

        printf ("\n");
   }

   return 0;
}