// 어드레스와 포인터
// 복습 3. 포인터를 이용한 배열의 역순 출력

#include <stdio.h>

int main() {
    int arr[5];
    
    for (int i = 0; i < 5; i++) {
        printf ("arr[%d] = ", i);
        scanf ("%d", arr+i);
    }
    
    int x = 4;
    int *p;
    
    p = &arr[4];
    
    printf ("-----------\n");
    do {
        // printf ("arr[%d] = %d\n", x, *(p+x));
        // x -= 1;
        
        printf ("arr[%d] = %d\n", x, *(p--));
        x--;
    } while (x >= 0);

    return 0;
}