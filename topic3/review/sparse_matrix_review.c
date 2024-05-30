#include <stdio.h>
#include <stdlib.h>

/*
    희소행렬은 행렬 안 components 들 중 실제 데이터가 거의 없는 행렬을 의미한다. 
    이때 실제 데이터 이외의 영역은 전부 0이기 때문에, 데이터가 없는 영역이 많아져 기억 공간 낭비가 발생한다.
    따라서 [실제 데이터의 갯수+1][3] 크기의 배열을 새로히 도입하여 희소행렬을 표현하게 된다.
    위 새로히 도입한 배열의 이름을 A라 한다면, A의 각 열은 순서대로 행 번호, 열 번호, 실제 데이터의 값으로 지정한다.
    첫번째 행은 전체 희소행렬의 행 갯수, 전체 희소행렬의 열 갯수, 실제 데이터 갯수로 지정한다.
    그 이후의 행은 희소행렬의 0번째 행부터 순회하면서 실제 데이터가 발견될 때 그 데이터의 행 번호, 열 번호, 값을 대입하게 된다.
*/

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
