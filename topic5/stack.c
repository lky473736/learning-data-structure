// 스택 연습문제 
/*
    1)
    main()함수에서 a, b, c, d, e를 차례대로 스택에 push, 
    입력한 데이터의 갯수를 카운트하면서 stack의 내용과 top값 출력
    
    2) 스택의 내용을 차례대로 출력 (top값 포함)
*/
    

#include <stdio.h>
#define N 5

char S[N];
int top = 0;

void push (char data);
void pop ();
void write ();

int main() {
    for (int i = 0; i < N; i++) {
        char data;
        scanf ("%c", &data);
        int _ = getchar();
        push (data);
        write ();
    }
    
    for (int i = 0; i < N; i++) {
        pop();
        write();
    }
    
    return 0;
}

void push (char data) {
    if (top >= N) {
        printf ("overflow\n");
    }
    
    else {
        S[top] = data;
        top = top + 1;
    }
}

void pop () {
    if (top == 0) {
        printf ("underflow\n");
    }
    
    else {
        top = top - 1;
        S[top] = NULL;
    }
}

void write () {
    // // 1) 
    // for (int i = 0; i < top; i++) {
    //     printf ("%c", S[i]);
    // }
    
    // 2) 
    // for (char* cp=S; *cp != NULL; cp++) {
    //     printf ("%c", *cp);
    // }
    
    printf ("%6s, %d\n", S, top);
}