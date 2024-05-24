/*
    2024-03-18, 임규연 (lky473736)
    과제 1. 2차원 배열을 index로 접근
*/

#include <stdio.h>

int main()
{
    // 2 nested loopstation 시 2차원 배열에 index로 접근하기 위해 i, j 선언 
    // i : 행번호 / j : 열번호
    int arr[2][2] = {{1, 2}, {3, 4}};
    int i, j;
    
    // index로 접근
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf ("arr[%d][%d] == %d / %p\n", i, j, arr[i][j], &arr[i][j]);
            // 4바이트씩 차이
        }
    }
    
    return 0;
}
