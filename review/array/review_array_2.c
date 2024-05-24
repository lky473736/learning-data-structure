// review 2. 3차원 배열 연습

#include <stdio.h>

int main() {
    int arr[2][2][2] = {1, 2, 3, 4, 5, 6, 7, 8};
    // == int arr[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    
    int *p, *q;
    int l = 0;
    
    for (int i = 0; i < 2; i++) { // 면
        p = arr[i];
        l = 0;
        
        for (int j = 0; j < 2; j++) { // 행
            q = arr[i][j];
            
            for (int k = 0; k < 2; k++) { // 열
                printf ("%d, %p\n", arr[i][j][k], &arr[i][j][k]); // original
                printf ("%d, %p\n", *(p + l), p + l); // p
                printf ("%d, %p\n", *(q + k), q + k); // q
                
                printf ("-----------\n");
                l++;
            }
        }
    }
    
    return 0;
}

/*
    배열 이름은 배열의 시작 주소를 가리킨다. 
    만약 3차원 배열의 배열 이름을 가지고 배열의 요소에 접근한다면,
    p = arr[][]; 라고 하는 것이 warning을 피할 수 있다.
*/