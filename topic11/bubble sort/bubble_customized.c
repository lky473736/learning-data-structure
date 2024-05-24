/*
    bubble sort (customized)
    임규연 (lky473736)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int a[10000];
void print(int passnum, int N);

int main() {
    int temp, N = 0;
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
    
    for (int i = 0; i < N-1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        
        print (i+1, N);
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
