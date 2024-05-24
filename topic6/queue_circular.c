// circular queue

#include <stdio.h>
#define n 5

int Q[n];
int tail = 0, head = 0;
void push(int data);
void pop();
void write1();
void write2();

int main()
{
    int i;
   
    for (i = 1; i <= n; i++) {
       push(i);
    }
    write2();

    for (i = 1; i <= 5; i++) {
       pop();
       write1();
    }
    write2();

    return 0;
}

void push(int data) {
    tail = (tail + 1) % n;
    
    if (head == tail) { 
        if (Q[tail] == NULL) {
            Q[tail] = data;
            printf ("overflow\n");
            return;
        }
        
        else {
            printf ("overflow\n");
            return;
        }
    }
    
    Q[tail] = data;
}


void pop() {
    if (head == tail && Q[head] == NULL) {
        printf ("underflow\n");
        return;
    }
    
    head = (head + 1) % n;
    Q[head] = NULL;
}

void write1() { // 삭제된 내용 출력
   printf("remove data\n");
   printf("head -> %d, tail -> %d\n", head, tail);
}

void write2() { // 전체 내용 출력
   int i;
   printf("Queue\n");
   for (i = 0; i < 5; i++) {
      printf("Q[%d] = %d, ", i, Q[i]);
   }
   printf("\n");
}