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

/*
    두 변수의 exchange는 파이썬으로 구현할 때는 a, b = b, a와 같이 작성하면 되지만, c언어는 아니다.
    따라서 두 변수를 서로 바꾸려면 temp라고 하는 변수의 도입을 통해 구현한다.
    만약 a와 b의 두 값을 변경하고 싶다면 아래를 참고.

    temp = a;
    a = b; 
    b = temp;
*/