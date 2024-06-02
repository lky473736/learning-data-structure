/*
    1 push
    2 push
    3 push
    4 push
    5 push
    pop
    pop
    pop
    pop
    1 push
    pop
    pop
    pop
*/

#include <stdio.h>

int queue[10];
int head = 0, tail = 0;

void push(int data) {
    if (tail >= 10) {
        printf ("overflow\n");
        return;
    }

    else {
        queue[tail] = data;
        tail += 1;
    }
}

void pop() {
    if (head == tail && queue[head] == NULL) {
        printf ("underflow\n");
        return;
    }

    else {
        if (head > tail) {
            printf ("underflow\n");
            return;
        }

        else {
            queue[head] = NULL;
            head += 1;
        }
    }
}

void print() {
    printf ("%d %d\n", head, tail);
    for (int i = 0; i < 10; i++) {
        printf ("%d ", queue[i]);
    }
    printf ("\n---------------\n");
}

int main() {
    for (int i = 0; i < 5; i++) {
        push(i+1);
        print();
    }

    for (int i = 0; i < 4; i++) {
        print();
        pop();
    }

    push(6);
    print();

    for (int i = 0; i < 3; i++) {
        print();
        pop();
    }

    return 0;
}