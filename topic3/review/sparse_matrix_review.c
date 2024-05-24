#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[7][7];
    int counting = 0;
    
    /*
        0 12 0 0 0 0 -5
        7 0 0 0 8 0 0 
        0 0 0 0 9 0 0
        0 0 0 0 0 0 0 
        0 0 0 11 0 0 0
        0 0 3 0 0 0 0
        15 0 0 0 0 0 0
    */
    
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            int input;
            scanf ("%d", &input);
            
            arr[i][j] = input;
            
            if (input == 0) {
                ;
            }
            
            else {
                counting += 1;
            }
        }
    }
    
    int **sparse_matrix;
    sparse_matrix = (int**) malloc (sizeof(int*) * (counting + 1));
    
    for (int i = 0; i < counting + 1; i++){
        sparse_matrix[i] = (int*) malloc (sizeof(int) * 3);
    }
    
    
    sparse_matrix[0][0] = 7;
    sparse_matrix[0][1] = 7;
    sparse_matrix[0][2] = counting;
    
    int head = 1;
    
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (arr[i][j] != 0) {
                sparse_matrix[head][0] = i;
                sparse_matrix[head][1] = j;
                sparse_matrix[head][2] = arr[i][j];
                
                head++;
            }
        }
    }
    
    for (int i = 0; i < counting + 1; i++) {
        for (int j = 0; j < 3; j++) {
            printf ("%d ", sparse_matrix[i][j]);
        }
        
        printf ("\n");
    }
    
    return 0;
}
