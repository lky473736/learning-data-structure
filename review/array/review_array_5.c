// review 5. 포인터로 접근 연습
// 배열의 이름은 항상 그 배열의 첫번째 component의 주소를 가리키고 있다는 점을 잊지 말자.

#include <stdio.h>
#include <string.h>

int main() 
{
    int arr_1d[] = {1, 2, 3, 4}; // 1, 2, 3, 4 components는 4바이트 차이 난다.
    int size_1d = sizeof(arr_1d) / 4; // sizeof(배열명)을 하면 배열의 크기 * 배열 데이터형의 바이트 수만큼을 반환한다.
    int *p1 = arr_1d; // 포인터로 1차원 배열에 접근한다. arr_1d는 arr_1d[0]의 주소를 가지고 있다.

    printf ("1D\n");
    for (int i = 0; i < size_1d; i++) {
        printf ("%d %p\n", *(p1 + i), p1 + i);
    }
    printf ("--------\n");

    int arr_2d[4][2] = {1, 2, 3, 4, 5, 6, 7, 8}; // {{1, 2}, {3, 4}, {5, 6}, {7, 8}}의 각 component는 4바이트 차이 난다.
    int size_2d = sizeof(arr_2d) / 4; // 잘 생각해보면 답이 나온다. 8개이다.
    int *p2 = arr_2d[0]; // 2차원 배열은 사실 1차원 배열의 묶음이라고 생각하는 것이 맞다. 현재 arr_2d는 4개의 배열이 각각 2개의 component들을 가지고 있다고 생각하면 된다. 따라서 p2에는 arr_2d의 주소를 넣어주어야 포인터로 접근하기 수월하다.
    int k = 0;
   
    printf ("2D\n"); 
    for (int i = 0; i < size_2d/2; i++) {
        for (int j = 0; j < size_2d/4; j++) {
            printf ("%d %p\n", *(p2 + k), p2 + k++);
        }
    }
    printf ("--------\n");

    return 0;
}
