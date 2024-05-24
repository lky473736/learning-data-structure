// 어드레스와 포인터
// 복습 5. 문자열 포인터 배열

#include <stdio.h>
#include <string.h>

int main() {
    char *arr[] = {"GCU", "KWU", "GWU"}; // 각각 원소의 시작 주소를 저장하는 포인터 배열
    // printf ("%s", arr[0]);
    
    for (int i = 0; i < 3; i++) {
        printf ("%s %p\n", arr[i], arr+i); 
        // 문자열 포인터 배열은 기억장소에 각 원소가 연속적으로 위치하지 않는다
    }
    
    for (int i = 0; i < 3; i++) {
        char *p = arr[i];
        
        while (*p != '\0') {
            putchar(*p);
            p++;
        }
        
        printf ("\n");
    }

    return 0;
}