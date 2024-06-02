/*
    compare of ascii code
        b
       / \ 
      a   c
           \ 
            d
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

struct node { 
    struct node *llink;
    char data;
    struct node *rlink;
};

void recu_inorder (struct node *head) {
    if (head != NULL) {
        recu_inorder(head->llink);
        printf ("%c\n", head->data);
        recu_inorder(head->rlink);
    }
}

int main() {
    struct node *head, *prev, *point;
    char characters[4] = {'b', 'a', 'c', 'd'};

    for (int i = 0; i < 4; i++) {
        struct node *Node = (struct node *) malloc (sizeof(struct node));
        Node->llink = NULL;
        Node->data = characters[i];
        Node->rlink = NULL;

        if (i == 0) {
            head = Node;
        }

        else {
            point = head;

            while (true) {
                if (point->data > Node->data) {
                    if (point->llink == NULL) {
                        point->llink = Node;
                        break;
                    }

                    else {
                        point = point->llink;
                    }
                }

                else {
                    if (point->rlink == NULL) {
                        point->rlink = Node;
                        break;
                    }

                    else {
                        point = point->rlink;
                    }
                }
            }
        }
    }

    recu_inorder(head);

    return 0;
}