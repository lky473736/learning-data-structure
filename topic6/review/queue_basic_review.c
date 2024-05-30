/*
    queue는 가장 먼저 삽입한 것이 가장 먼저 출력되는 자료구조이다. 
    프로세스나 CPU 스케줄링 등에서 queue가 사용된다.
    queue는 위와 같은 성질로 인하여 FIFO (first in first out)이라고 불리운다.

    queue에서 포인터는 2개, head와 tail로 이루어져 있다.
    head는 데이터를 삭제(출력)할 때 사용하는 포인터이며, tail은 데이터를 삽입할 때 사용하는 포인터이다.
    만약 삭제(출력)시에 head==tail이라면 underflow이며,
    만약 삽입 시에 tail >= n이라면 overflow이다.
*/

#include <stdio.h>
#define N 10

int arr[10];
int head = 0, tail = 0;

void push (int data) { 
    if (tail >= N) {
        printf ("overflow\n");
        return;
    }

    arr[tail] = data;
    tail++;
}

void pop () {
    if (head == 0 && tail == 0) {
        printf ("underflow\n");
        return;
    } 

    if (head == tail) {
        printf ("underflow\n");
        return;
    }

    arr[head] = NULL;
    head++;
}

void print() {
    for (int i = 0; i < 10; i++) {
        printf ("%d ", arr[i]);
    }
    printf ("\n");
}

int main() {
    for (int i = 0; i < 10; i++) {
        push (i+1);
        print();
    }

    for (int i = 0; i < 10; i++) {
        pop();
        print();
    }

    return 0;
}