// review 6. 글자/문자열 입력, 출력

#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "daramji";
    char b;
    char c[10];
    
    // putchar : 개행 X. 글자를 출력
    for (int i = 0; i < strlen(a); i++) {
        putchar (a[i]);
    }
    
    // puts : 개행 X. 문자열을 출력. 안에 주소값을 넣음. 문자열의 널문자가 개행으로 바뀐다
    printf ("\n");
    puts(a);
    
    // getchar : 글자를 입력 (버퍼,  EOF의 값 == -1)
    b = getchar();
    putchar(b);
    
    // gets : 문자열을 입력 (버퍼)
    // gets에 버퍼가 입력될 수 있으니 버퍼처리를 해야 한다
    int _ = getchar();
    printf ("\n");
    
    gets(c);
    // *(c + strlen(c) + 1) = '\0';
    puts(c);
    
    return 0;
}

/*
    putchar : 문자 하나 입력, 개행 X
    getchar : 글자를 입력
    puts : 안에 문자열의 주소값을 넣음
    gets : 문자열을 입력받음 (버퍼처리 해주기)
*/