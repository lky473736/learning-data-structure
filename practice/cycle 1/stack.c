#include <stdio.h>

/*
    1 ~ 10 push
    10 ~ 1 pop
*/

int arr[10];
int top = 0;

void push (int data) {
    if (top >= 10) {
        printf ("overflow\n");  
        return;
    }

    else {
        arr[top] = data;
        top++;
    }
}

void pop () {
    if (top <= 0) {
        printf ("underflow\n");
        return;
    }

    else {
        top--;
        arr[top] = NULL;
    }
}

int main() {
    for (int i = 0; i < 15; i++) {
        push(i+1);
        
        for (int j = 0; j < 10; j++) {
            printf ("%d ", arr[j]);
        }

        printf ("\n----------------\n");
    }

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 10; j++) {
            printf ("%d ", arr[j]);
        }

        pop();

        printf ("\n----------------\n");
    }
}