#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

int main()
{
    struct node* A;
    A = (struct node *) malloc (sizeof (struct node));
    
    printf ("%ld", sizeof(*A));

    return 0;
}