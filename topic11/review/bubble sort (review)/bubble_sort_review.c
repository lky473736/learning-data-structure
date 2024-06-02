/*
    bubble sort는 그 수행 방식이 거품 모양이라서 bubble이다. 인접한 두개의 데이터를 비교해가면서 정렬하는 방식이다.
    인접한 두 component를 비교하면서, 크면 교환한다. 가장 큰 값은 맨 뒤로 이동 후, 다음 pass에선 이를 제외하는 형식이다.
*/

#include <stdio.h>

int main() {
    int arr[10] = {10, 1, 4, 3, 2, 5, 7, 9, 8, 6};
    int temp;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

        printf ("%d pass\n", i);

        for (int j = 0; j < 10; j++) { 
            printf ("%d ", arr[j]);
        }

        printf ("\n --------- \n");
    }

    return 0;

    // bubble sort는 뒤에서부터 접근 불가 층을 만들어서 뒤로부터 정렬해간다고 보일 수 있다.
}