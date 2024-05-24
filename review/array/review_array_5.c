// review 4. 문자열 배열 2

#include <stdio.h>
#include <string.h>

int main() 
{
    char a[] = "daramji"; // 문자열은 일종의 배열. 배열은 일종의 포인터. 문자열은 포인터
    
    for (int i = 0; i < strlen(a)+1; i++) {
        printf ("%c %p\n", a[i], a+i); // 주소값이 1씩 차이 (char형) + 끝에 널문자 (0)
    }
}

/*
    문자열은 일종의 배열이다. 문자열을 정의할 수 있는 형식은 3가지이다.
        - 문자형 배열을 만드는 것 : char a[] = "daramji";
        - char형 배열에 한 글자씩 넣기 + 끝에 널문자 삽입 : char a[] = {'d', 'a', 'r', 'a', 'm', 'j', 'i', '\0'};
        - 문자형 포인터 : char *a = "daramji";
        - 문자형 포인터를 담은 배열 : char *a[] = {"daramji", "dedenne"};
*/