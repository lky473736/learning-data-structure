/*
    셸 정렬은 떨어진 데이터와 비교를 한다. 
    일정한 거리 만큼 떨어진 데이터와 비교하여 크면 교환한다.
    거리 h = n / 2 + 1이며, h가 3보다 작다면 h = h-1을 수행하게 된다.
    (원래 방법보다 이 방법을 이용하여 계산한다)
*/

#include <stdio.h>

int main() {
    int arr[10] = {-1, -2, 2023, 19, 1, 0, 92, 2014, 2004, -1024};
    int h = 10/2 + 1, temp = 0;
    int cnt = 0;

    while (h > 0) {
        for (int i = h; i < 10; i++) {
            if (arr[i-h] > arr[i]) {
                temp = arr[i-h];
                arr[i-h] = arr[i];
                arr[i] = temp;
            }
        }

        if (h < 3) {
            h -= 1;
        }

        else {
            h = h/2 + 1;
        }

        printf ("%d pass\n", ++cnt);

        for (int j = 0; j < 10; j++) { 
            printf ("%d ", arr[j]);
        }

        printf ("\n --------- \n");
    }
}