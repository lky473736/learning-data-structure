// basic queue

#include <stdio.h>
#define n 5

int Q[n];
int tail = 0, head = 0;
void push(int data);
void pop();
void write1();
void write2();

int main() {
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
   if (tail >= n) {
      printf("overflow");
      return;
   }
   Q[tail] = data;
   tail++;
}

void pop() {
   if (head == 0 && tail == 0) {
      printf("underflow\n");
      return;
   }
   
   if (head < tail) {
      Q[head] = NULL;
      head++;
      
      if (head == tail) {
         printf("underflow\n");
         return;
      }
   }
}

void write1() { // 삭제된 내용 출력
   printf("remove data\n");
   printf("head -> %d, tail -> %d\n", head, tail);
}

void write2() { // 전체 내용 출력
   int i;
   printf("Queue : ");
   
   for (i = 0; i < 4; i++) {
      printf("Q[%d] = %d, ", i, Q[i]);
   }
   printf ("Q[%d] = %d", i, Q[i]);
   printf("\n");
}