/*
    1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 10
*/

#include <stdio.h>
#include <stdlib.h>

struct list {
    int data;
    struct list *link;
};

int main() {
    struct list *prev, *head;

    for (int i = 0; i < 10; i++) {
        struct list *node = (struct list *) malloc (sizeof(struct list));
        node->data = i+1;
        node->link = NULL;

        if (i == 0) {
            head = node;
        }

        else {
            prev->link = node;
        }

        prev = node;
    }

    while (1) {
        printf ("%d ", head->data);

        if (head->link == NULL) {
            break;
        }
        
        head = head->link;
    }

    return 0;
}