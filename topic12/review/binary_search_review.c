/*
    search를 하기 위해서는 정렬된 행렬이 필요하다. (linear 빼고))
    
    search의 종류는 아래와 같다.
        - linear search : 시간복잡도 n, 선형적으로 차례대로 component를 확인해가면서 찾음 (정렬 X)
        - binary search : 시간복잡도 log_n, start와 end를 사용하여 mid를 계산하고 mid의 값과 data를 비교해가면서 영역을 1/2배씩 좁혀가면서 탐색. 
        - fibonacci search : 피보나치 수열을 이용하여 탐색, i, p, q값을 구하여 탐색
        - interpolation search : 배열의 값들이 등차수열을 이룰 때 사용할 수 있는 탐색. 공식을 이용하여 바로 찾을 수 있음. 

    binary search가 가장 많이 사용되며, 그 이외의 것은 알고리즘을 알아두면 되겠다.
*/

// binary search로 20개의 원소 중 106 찾기
#include <stdio.h>

int arr[20] = {1, 2, 4, 7, 11, 16, 22, 29, 37, 46, 56, 67, 79, 92, 106, 121, 137, 154, 172, 191};
int start = 0, end = 19, mid, data = 29;

int binary_search (int data) {
    while (start <= end) {
        mid = (start + end) / 2;
        printf ("%d %d %d\n", start, mid, end);

        if (arr[mid] == data) {
            return mid;
        }

        else {
            if (arr[mid] > data) {
                end = mid - 1;
            }

            else {
                start = mid + 1;
            }
        }
    }

    return -1;
}

int main () {
    printf ("%d\n", binary_search(data));

    return 0;
}