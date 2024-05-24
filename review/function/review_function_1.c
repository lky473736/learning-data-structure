// 함수
// 복습 1. 팩토리얼을 recursive call로 구현

#include <stdio.h>

int factorial (int a);

int main() {
    for (int i = 0; i < 11; i++) {
        printf ("%d! == %d\n", 10-i, factorial(10-i));
    }
    
    return 0;
}

int factorial (int a) {
    if (a == 1) {
        return 1;
    }
    
    else {
        return a * factorial(a-1);
    }
}