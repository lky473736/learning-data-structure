#include <stdio.h>

/*
    quick 정렬은 divide and conquer 형식으로 함수를 구성한다.
    분할을 해가면서 앞쪽 리스트와 뒤쪽 리스트를 정렬하는 방식을 취한다.
*/

int arr[10] = {-1, -2, -13, -19, 20, 1, 2, 1024, 32, 0};

void q_s(int start, int last) {
    int temp, data, i = start, j = last;
    data = arr[start];

    if (i < j) {
        do {
            while (arr[i] <= data) { i += 1; }
            while (arr[i] > data) { j -= 1; }

            if (i < j) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        } while (i <= j);

        temp = arr[j];
        arr[j] = arr[start];
        arr[start] = temp;

        q_s(start, j-1);
        q_s(j+1, last);
    }
}

int main() {
    q_s (0, 9);
    
    for (int i = 0; i < 10; i++) {
        printf ("%d ", arr[i]);
    }
}