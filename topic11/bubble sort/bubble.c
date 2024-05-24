/*
    bubble sort
    임규연 (lky473736)
*/

#include <stdio.h>

int a[5] = {14, 6, 5, 31, 27};
void print(int n);

int main() {
    int temp;
    
    print (0);
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        
        print (i+1);
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
