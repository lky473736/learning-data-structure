/*
    2024-03-18, 임규연 (lky473736)
    과제 5. sparse matrix 구현
*/

#include <stdio.h>

int main()
{
    int K[7][7] = {
        {0, 12, 0, 0, 0, 0, -5},
        {7, 0, 0, 0, 8, 0, 0},
        {0, 0, 0, 0, 9, 0, 0},
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 11, 0, 0, 0},
        {0, 0, 3, 0, 0, 0, 0},
        {15, 0, 0, 0, 0, 0, 0},
    };
    
    int r = 0; // 0이 아닌 component의 갯수 저장
    int S[9][3];
    
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (K[i][j] != 0) {
                r += 1;
                S[r][0] = i;
                S[r][1] = j;
                S[r][2] = K[i][j];
            }
            printf ("%d ", K[i][j]);
        }
        printf ("\n");
    }
    
    // 0번째 row에 들어갈 것
    S[0][0] = 7;
    S[0][1] = 7;
    S[0][2] = r;
    
    printf ("---------\n");
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 3; j++) {
            printf ("%d ", S[i][j]);
        }
        printf ("\n");
    }
    
    return 0;
}