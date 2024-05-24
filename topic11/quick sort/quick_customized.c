/*
    quick sort (customized)
    임규연 (lky473736)
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int a[10000];
void print(int passnum, int N);
void q_s (int start, int last, int N);
int cnt = 0;

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
    q_s (0, N-1, N);
    return 0;
}

// void q_s (int start, int last, int N) {
//     int i, j, temp, data;
//     i = start;
//     j = last;
//     data = a[start];
    
//     if (i < j) {
//         do {
//             while (a[i] <= data) { i = i + 1; }
//             while (a[j] > data) { j = j - 1; }
            
//             if (i < j) {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         } while (i < j);
    
    
//         temp = a[j];
//         a[j] = a[start];
//         a[start] = temp;
            
//         print (++cnt, N);
            
//         q_s (start, j-1, N);
//         q_s (j+1, last, N);
//     }
// }

void q_s (int start, int last, int N) {
    if (start < last) {
        int i = start, j = last;
        int pivot = a[start];
        
        while (i < j) {
            while (i < j && a[j] >= pivot) j--;
            while (i < j && a[i] <= pivot) i++;
            if (i < j) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        a[start] = a[i];
        a[i] = pivot;
        
        print(++cnt, N);
        
        q_s(start, i - 1, N);
        q_s(i + 1, last, N);
    }
}

void print (int passnum, int N) {
    printf ("pass %d : ", passnum);
    
    for (int i = 0; i < N; i++) {
        printf ("%5d", a[i]);
    }
    
    printf ("\n");
}
