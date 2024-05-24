// 함수
// 복습 3. call by reference를 이용해 두 변수의 exchange 구현

#include <stdio.h>

void exchange (int *p1, int *p2);

int main() {
    int a, b;
    scanf ("%d %d", &a, &b);
    
    exchange (&a, &b);
    
    printf ("%d %d\n", a, b);
    
    return 0;
}

void exchange (int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}