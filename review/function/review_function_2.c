// 함수
// 복습 2. call by reference를 이용해 어느 주소값이 가리키는 수 변형

#include <stdio.h>

void diff (int a, int *p);

int main() {
    int a, b;
    
    scanf ("%d %d", &a, &b);
    
    diff (a, &b);
    
    printf ("%d\n", b);
    
    return 0;
}

void diff (int a, int *p) {
    *p -= a;
}