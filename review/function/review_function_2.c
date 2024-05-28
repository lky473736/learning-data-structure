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

/*
    call by reference는 주소값을 argument로 받는 방법이다. 
    지금 diff에 두번째 parameter를 포인터 변수로 지정하였는데, 이는 주소를 받겠다는 의미이다. 예를 들어서 

    main ...
    int rst, a = 10, b = 20;
    sum (&rst, a, b);
    printf ("%d", rst);

    void sum (int *address, int operand1, int operand2) {
        *address = operand1 + operand2;
    }

    현재 sum의 첫번째 parameter가 포인터 변수이다. 
    따라서 첫번째 argument엔 특정 메모리 절대주소가 들어가야 한다는 점을 알 수 있다. 
    또한 *address를 통해 address에 작성된 주소 argument를 참조하여 그 주소에 operand1 + operand2를 대입하고 있다.
*/