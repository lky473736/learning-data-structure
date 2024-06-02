/*
    제일 쉬운 정렬이자, 많이 이용되는 정렬법이다.
    버블정렬과 선택정렬의 차이점은 비교를 하는 방식이다. 만약 첫번째 값과 인덱스 + 1++ 데이터를 비교하여 크면 교환한다. 
    이번에는 끝에서부터 채워지는 것이 아닌 앞에서부터 정렬되는 형식이다.
*/

#include <stdio.h>

int main() {
    int arr[10] = {-1, -2, -3, 13, 0, -11, 3, 2, 1, 1024};
    int temp;

    for (int i = 0; i < 9; i++) {
        for (int j = i+1; j <= 9; j++) { // 인덱스 + 1~~
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        printf ("%d pass\n", i);

        for (int j = 0; j < 10; j++) { 
            printf ("%d ", arr[j]);
        }

        printf ("\n --------- \n");
    }

    return 0;
}