/*
    1~5 push
    1~5 pop
*/

#include <stdio.h>

int circular_queue[5];
int head = 0, tail = 0;

void print () { // 전체 내용 출력
   int i;

   for (i = 0; i < 5; i++) {
      printf("circular_queue[%d] = %d, \n", i, circular_queue[i]);
   }
   printf ("=======\n");
}

void push (int data) {
    tail = (tail + 1) % 5;

    if (head == tail) {
        if (circular_queue[tail] != NULL) {
            circular_queue[tail] = data;
            printf ("full -> overflow\n");
            return;
        }

        else {
            circular_queue[tail] = data;
            return;
        }
    }

    circular_queue[tail] = data;

    return;
}

void pop () {
    if (head == tail && circular_queue[head] == NULL) {
        printf ("underflow\n");
        return;
    }

    head = (head + 1) % 5;
    circular_queue[head] = NULL;
}

int main() {
    for (int i = 0; i < 5; i++) {
        push(i+1);
        print();
    }

    for (int i = 0; i < 5; i++) {
        pop();
        print();
    }
    
    return 0;
}