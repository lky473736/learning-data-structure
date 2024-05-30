#include <stdio.h>
#define N 10

/*
    stack은 한 곳에서 데이터의 출력과 데이터의 입력이 일어날 수 있는 자료구조이다. 
    가장 나중에 입력한 데이터가 가장 먼저 출력되기 때문에 LIFO (last in first out)이라고 불린다.
    여기서 필요한 변수는 top이다. top은 데이터의 갯수와 동일한 역할이자 새로히 추가되거나 삭제되어야 할 인덱스를 말한다.
    stack은 활성 레코드에서 이용하거나 함수 호출 및 수식 계산에서 사용된다.
    stack은 prefix, infix, postfix의 수식 계산을 위해 사용된다.
*/

int arr[N];
int top = 0; // 필요한 index 값 top

void print(); // 배열 내용 출력
void push (int data); // argument값을 stack에 넣기 위함
void pop();

int main() {
    print();
    
    for (int i = 0; i < N; i++) {
        push (i+1); // push 10번
        print();
    }

    for (int i = 0; i < N; i++) {
        pop(); // pop 10번
        print();
    }

    return 0;
}

void print() {
    for (int i = 0; i < N; i++) {
        printf ("%d ", arr[i]);
    }
    
    printf ("| %d\n", top);
}

void push (int data) {
    if (top >= N) {
        printf ("overflow\n");
        return;
    }

    arr[top] = data;
    top += 1;
}

void pop() {
    if (top <= 0) {
        printf ("underflow\n");
        return;
    }

    top -= 1;
    arr[top] = NULL;
}