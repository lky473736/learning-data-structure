/*
    quick sort
    임규연 (lky473736)
*/

// #include <stdio.h>

// int a[5] = {14, 6, 5, 31, 27};
// void quick_sort (int start, int end);
// void print (int n);

// int main() {
//     print (0);
//     quick_sort (0, 4);
//     return 0;
// }

// void quick_sort (int start, int end) {
//     if (start >= end) return;
    
//     int pivot = a[start];
//     int left = start + 1;
//     int right = end;
    
//     do {
//         while (left <= end && a[left] <= pivot) left++;
//         while (right > start && a[right] > pivot) right--;
        
//         if (left < right) {
//             int temp = a[left];
//             a[left] = a[right];
//             a[right] = temp;
//         }
//     } while (left <= right);
    
//     int temp = a[right];
//     a[right] = a[start];
//     a[start] = temp;
    
//     print (++start);
    
//     quick_sort (start, right - 1);
//     quick_sort (right + 1, end);
// }

// void print (int n) {
//     printf ("pass %d : ", n);
    
//     for (int i = 0; i < 5; i++) {
//         printf ("%3d", a[i]);
//     }
    
//     printf ("\n");
// }

#include <stdio.h>

int a[5] = {14, 6, 5, 31, 27};
void q_s (int start, int last);
void print(int n);
int cnt = 0;

int main() {
    print (0);
    q_s (0, 4);
    return 0;
}

void q_s (int start, int last) {
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
        
        print(++cnt);
        
        q_s(start, i - 1);
        q_s(i + 1, last);
    }
}

void print (int n) {
    printf ("pass %d : ", n);
    
    for (int i = 0; i < 5; i++) {
        printf ("%5d", a[i]);
    }
    
    printf ("\n");
}
