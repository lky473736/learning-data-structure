/*
    insertion sort (customized)
    임규연 (lky473736)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int a[10000];
void print(int passnum, int N);

int main() {
    int temp, cnt, N = 0;
    char input[100];
    
    printf ("If you want to stop for inputting data, press 'q'\n");
    while (true) {
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0; // 문자열 끝 개행문자 제거함

        if (strcmp(input, "q") == 0 || strcmp(input, "Q") == 0) { // 사용자가 q나 Q 입력하면
            break;
        }
        
        int num = atoi(input); // 정수로 변환함
        a[N++] = num;
    }
    
    print (0, N);
    
    for (int i = 1; i < N; i++) {
        temp = a[i];
        cnt = i - 1;
        
        while (cnt >= 0 && temp <= a[cnt]) {
            a[cnt + 1] = a[cnt];
            cnt = cnt - 1;
        }
        
        a[cnt + 1] = temp;
        
        print (i, N);
    }
    
    return 0;
}

void print (int passnum, int N) {
    printf ("pass %d : ", passnum);
    
    for (int i = 0; i < N; i++) {
        printf ("%5d", a[i]);
    }
    
    printf ("\n");
}
