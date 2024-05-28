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

/*
    만약 recursive call이 아닌 loopstation으로만 구현한다면 다음과 같이 구현할 수 있다. 

    int factorial (int a) {
        int rst = 1;

        while (a > 0) {
            rst *= a--;
        }

        return rst;
    }
*/