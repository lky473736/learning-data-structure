// review 3. 문자열 배열 1

#include <stdio.h>

int main() 
{
    char a[] = "daramji";
    char b[] = {'d', 'a', 'r', 'a', 'm', 'j', 'i', '\0'};
    char c[] = {'d', 'a', 'r', 'a', 'm', 'j', 'i'};
    
    printf ("%s %s %s", a, b, c);
    
    return 0;
}

/*
    문자열 배열엔 반드시 마지막에 널문자가 들어간다. 
    char arr[] = "~~" 형식에는 자동적으로 널문자가 기입된다.
    형식 문자열 %s를 사용한다면 반드시 끝에 널문자를 작성해야 오류가 뜨지 않는다.
    printf 할 시 &가 아닌 그냥 변수 명 자체를 넣는다.
*/