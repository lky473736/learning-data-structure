/*
    shell sort
    임규연 (lky473736)
*/

#include <stdio.h>

int a[5] = {14, 6, 5, 31, 27};
int cnt = 0;

void print (int n, int h) {
    printf ("h == %d -> pass %d : ", h, n);
    
    for (int i = 0; i < 5; i++) {
        printf ("%5d", a[i]);
    }
    
    printf ("\n");
}

int main() {
    int i, j, h, temp;

    print (cnt, 0);
    h = 5 / 2 + 1;

    while (h > 0) {
        for (i = h; i < 5; i++) {
            j = i - h;

            if (a[j] > a[j+h]) {
                temp = a[j];
                a[j] = a[j+h];
                a[j+h] = temp;
            }
        }

        print (++cnt, h);

        if (h < 3) { h = h - 1; }
        else { h = h / 2 + 1; }
    }
}