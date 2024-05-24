/*
    insertion sort
    임규연 (lky473736)
*/

#include <stdio.h>

int a[5] = {14, 6, 5, 31, 27};
void print(int n);

int main() {
    int temp, cnt;
    
    print (0);
    
    for (int i = 1; i < 5; i++) {
        temp = a[i];
        cnt = i - 1;
        
        while (cnt >= 0 && temp <= a[cnt]) {
            a[cnt + 1] = a[cnt];
            cnt = cnt - 1;
        }
        
        a[cnt + 1] = temp;
        
        print (i);
    }
    
    return 0;
}

void print (int n) {
    printf ("pass %d : ", n);
    
    for (int i = 0; i < 5; i++) {
        printf ("%5d", a[i]);
    }
    
    printf ("\n");
}
