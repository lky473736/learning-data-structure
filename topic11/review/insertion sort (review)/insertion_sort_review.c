#include <stdio.h>

/*
    가장 간단한 정렬 방법이고, 정렬된 리스트에 키 값의 크기를 비교하여 순서 위치에 따라 삽입하는 방법이다.
    삽입키라고 하는 기준 키가 있는데, 첫번째 삽입 키는 두번째 자료부터 시작한다.
*/

int main() {
    int arr[] = {-1, -31, 2023, 19, 1, 0, 92, 2014, 2004, -1024};
    int temp, cnt;

    for (int i = 1; i < 10; i++) {
        temp = arr[i];
        cnt = i - 1;

        while (cnt >= 0) {
            if (temp < arr[cnt]) { 
                arr[cnt+1] = arr[cnt];
                arr[cnt] = temp;
            }

            else {
                arr[cnt+1] = temp;
                break;
            }

            cnt--;
        }

        printf ("%d pass\n", i);

        for (int j = 0; j < 10; j++) { 
            printf ("%d ", arr[j]);
        }

        printf ("\n --------- \n");
    }

    return 0;
}