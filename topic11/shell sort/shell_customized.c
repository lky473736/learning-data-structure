/*
    shell sort (customized)
    임규연 (lky473736)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int a[10000];
void print(int passnum, int N, int h);

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

    int i = 0, j = 0, cnt = 0, h = 0;
    print (cnt, N, h);
    h = N / 2 + 1;

    while (h > 0) {
        for (i = h; i < N; i++) {
            j = i - h;

            if (a[j] > a[j+h]) {
                temp = a[j];
                a[j] = a[j+h];
                a[j+h] = temp;
            }
        }

        print (++cnt, N, h);

        if (h < 3) { h = h - 1; }
        else { h = h / 2 + 1; }
    }
}

void print (int passnum, int N, int h) {
    printf ("h == %d -> pass %d : ", h, passnum);
    
    for (int i = 0; i < N; i++) {
        printf ("%5d", a[i]);
    }
    
    printf ("\n");
}