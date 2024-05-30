/*
    queue의 문제점은 비어있는 공간을 효율적으로 이용할 수 없다는 것이다.
    head와 tail이 계속 증가한다면 배열 마지막 원소에 도착하여 더 이상 사용이 불가능한 상황이 일어날 수 있다.
    따라서 위 문제점을 해결하기 위해 각 요소를 움직이면서 저장하는 moving queue를 도입하였다.
    앞부분에 사용할 수 있는 공간만큼 앞쪽으로 이동시키고 그에 따라 head와 tail값을 조정하는 것인데, 이것도 시간소모라는 문제점이 존재한다. 
    따라서 modular 연산을 이용하여 circular queue를 도입한다.

    circular queue는 가장 첫번째 원소를 비워두고, 두번째 위치부터 원소를 대입한다.
    이때 modular 연산으로 head = (head+1) % N, tail = (tail+1) % N 형식으로 포인터를 수정하여 접근한다.
*/

#include <stdio.h>
#define N 5

int arr[N];
int head = 0, tail = 0;

void push (int data) {
    tail = (tail + 1) % N;

    if (head == tail) {
        if (arr[tail] == NULL) {
            arr[tail] = data;
        }

        else {
            printf ("overflow\n");
            return;
        }
    }

    arr[tail] = data;
}

void pop() {
    if (head == tail && arr[head] == NULL) {
        printf ("underflow\n");
        return;
    }

    head = (head + 1) % N;  
    arr[head] = NULL;
}

void print() {
    for (int i = 0; i < N; i++) {
        printf ("%d ", arr[i]);
    }

    printf ("\n");
}

int main() {
    for (int i = 0; i < N; i++) {
        push (i+1);
        print();
    }

    for (int i = 0; i < N; i++) {
        pop();
        print();
    }

    return 0;
}