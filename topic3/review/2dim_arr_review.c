/*
    2차원 배열을 인덱스로 접근할 수도 있고 포인터로 접근할 수도 있다.
    포인터로 접근한다는 말은 주소로 접근한다는 것인데, 아래의 예제를 살펴보자.
*/

#include <stdio.h>

int main() {
    int arr[2][2] = {1, 2, 3, 4};

    printf ("index\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf ("%d %p\n", arr[i][j], &arr[i][j]); 
            // 인덱스로 접근하고 있다. i행 j열의 component 값과 주소를 출력한다.
        }
    }
    printf ("------\n");

    printf ("address\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf ("%d %p\n", *(arr[i]+j), arr[i]+j);
            // 주소로 접근하고 있다. 2차원 배열은 누누히 강조하지만, 1차원 배열의 집합이기 때문에 2차원 배열에서 포인터를 사용하기 위해 행의 시작 주소를 대입한다.
        }
    }
    printf ("------\n");

    printf ("pointer\n");
    for (int i = 0; i < 2; i++) {
        int *p = arr[i];
        for (int j = 0; j < 2; j++) {
            printf ("%d %p\n", *(p + j), p + j);
            // 위에서 arr[i]를 그냥 p로 대치했을 뿐이다.
        }
    }
    printf ("------\n");

    return 0;
}