// 어드레스와 포인터
// 복습 4. 문자열 배열과 문자열 포인터의 차이점

#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "daramji"; // {'d', 'a', 'r', 'a', 'm', 'j', 'i', '\0'}
    char *str2 = "daramji"; // "daramji"라고 하는 문자열 배열의 시작 주소를 저장
    
    // 문자열 배열 출력
    for (int i = 0; i < strlen(str1); i++) {
        putchar (*(str1+i)); // putchar : 안에 주소가 아닌 글자 자체를 넣음
    }
    printf ("\n");
    
    // 문자열 포인터 출력
    for (int i = 0; i < strlen(str2); i++) {
        putchar (*(str2+i)); // putchar : 안에 주소가 아닌 글자 자체를 넣음
    }
    printf ("\n");
    
    // 널문자를 활용하여 출력
    while (*str2) {
        putchar(*(str2++));
    }

    return 0;
}