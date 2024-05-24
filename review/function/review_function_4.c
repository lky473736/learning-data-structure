// 함수
// 복습 4. 2차원 배열을 parameter로 하는 함수 (배열 출력)

#include <stdio.h>
#include <string.h>

void printer (char string[][3], int length); 
// 문자열 포인터 배열 == 2차원 문자열 배열
// char *k[3] == char k[3][]

int main() {
    char string[5][3] = {"ab", "cd", "ef", "gh", "ij"};
    
    printer (string, 5);
    
    return 0;
}

void printer (char string[][3], int length) {
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < 3; j++) {
            if (string[i][j] != '\0') {
                putchar (string[i][j]);
            }
        }
        
        printf ("\n");
    }
}