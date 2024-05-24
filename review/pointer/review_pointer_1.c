// 어드레스와 포인터 
// 복습 1. 포인터의 포인터 변수

#include <stdio.h>

int main() {
    int a, *p, **pp;
    
    a = 1;
    p = &a; // p는 정수형 변수 a의 주소값을 가지고 있다
    pp = &p; // pp는 정수형 포인터 변수 p의 주소값을 가지고 있다
    
    // a <- p <- pp 
    
    printf ("%d %d %d\n", a, *p, **pp);
    
    return 0;
}