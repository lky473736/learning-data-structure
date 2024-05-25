#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct list {
    int data; // data field
    struct list* link; // link field
};

int main() {
    struct list *prev, *current, *head;
    
    for (int i = 0; i < 3; i++) {
        int data;
        scanf ("%d", &data);
        
        current = (struct list *) malloc (sizeof(struct list)); // memory allocation
        current->data = data;
        
        if (i == 0) {
            head = current;
        }
        
        else {
            prev->link = current;
        }
        
        prev = current;
        
        if (i == 3 - 1) {
            current->link = NULL;
        }
    }
    
    // for (int i = 0; i < 3; i++) {
    //     printf ("number %d data of linked list : %d\n", i+1, head->data);
        
    //     struct list *free_address = head;
        
    //     head = head->link;
    //     free (free_address);
    // }
    
    int i = 0;
    
    while (true) {
        printf ("%p | number %d data of linked list : %d\n", head, ++i, head->data);

        if (head->link == NULL) {
            printf ("detected NULL\n");
            free(head->link);
            break;
        }
        
        struct list *free_address = head;
        head = head->link;
        free(free_address);
    }
    
    return 0;
}