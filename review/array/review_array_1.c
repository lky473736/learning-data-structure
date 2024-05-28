// review 1. 2차원 배열에서 n번째 tuple와 n+1번째 tuple이 서로 연결되어 메모리에 저장하는 지를 실험

#include <stdio.h>

int main()
{
    int i, j, mbc[2][3] = {10, 20, 30, 40, 50, 60}; 
    // 2차원 배열은 1차원 배열의 집합이다. 1차원 배열이 2개씩 각각 3개의 component들을 담고 있다고 생각하자. 
    // == mbc[2][3] = {{10, 20, 30}, {40, 50, 60}}
    
    int *p;
    
    for (i = 0; i < 2; i++) {
        p = mbc[i];
        
        for (j = 0; j < 3; j++) {
            printf ("%d, %p\n", mbc[i][j], &mbc[i][j]);
            printf ("%d, %p\n", *(p + j), p + j);
        }
        
        printf ("------\n");
    }
}

/*
    n번째 tuple과 n+1번째 tuple은 서로 연결되어 있다. 
    p차원 배열에서 각 tuple은 각 자료형의 바이트 수만큼 떨어져 있을 뿐이지 서로 연속적으로 저장된다. 
*/