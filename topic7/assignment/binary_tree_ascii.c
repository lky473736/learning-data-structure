/*
    binary tree assignment
    : 아스키 값 비교하여 트리 구현
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char *data;
    struct Node* lchild;
    struct Node* rchild;
} Node;

Node* init_node (const char *data) {
    Node* node = (Node*)malloc(sizeof(Node));
    
    node->data = strdup(data);
    node->lchild = NULL;
    node->rchild = NULL;
    
    return node;
}

void insert_node (Node** current_node, const char *data) {
    if (*current_node == NULL) {
        *current_node = init_node(data);
        return;
    }
    
    if (strcmp(data, (*current_node)->data) < 0) {
        insert_node(&(*current_node)->lchild, data);
    } 
    
    else {
        insert_node(&(*current_node)->rchild, data);
    }
}

void recu_inorder (Node* current_node) {
    if (current_node != NULL) {
        recu_inorder(current_node->lchild);
        printf("%s ", current_node->data);
        recu_inorder(current_node->rchild);
    }
}

void recu_preorder(Node* current_node) {
    if (current_node != NULL) {
        printf("%s ", current_node->data);
        recu_preorder(current_node->lchild);
        recu_preorder(current_node->rchild);
    }
}

void recu_postorder(Node* current_node) {
    if (current_node != NULL) {
        recu_postorder(current_node->lchild);
        recu_postorder(current_node->rchild);
        printf("%s ", current_node->data);
    }
}

int main() {
    char input[5];
    Node* root = NULL;
    
    for (int i = 0; i < 4; i++) {
        scanf("%s", input);
        insert_node(&root, input);
    }

    recu_inorder (root);
    printf ("\n");
    recu_preorder (root);
    printf ("\n");
    recu_postorder (root);

    return 0;
}
