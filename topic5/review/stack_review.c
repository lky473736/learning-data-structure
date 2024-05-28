#include <stdio.h>
#define N 10

int arr[N];
int top = 0;

void print();
void push (int data);
void pop();

int main() {
    print();
    
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

void print() {
    for (int i = 0; i < N; i++) {
        printf ("%d ", arr[i]);
    }
    
    printf ("| %d\n", top);
}

void push (int data) {
    if (top >= N) {
        printf ("overflow\n");
        return;
    }

    arr[top] = data;
    top += 1;
}

void pop() {
    if (top <= 0) {
        printf ("underflow\n");
        return;
    }

    top -= 1;
    arr[top] = NULL;
}