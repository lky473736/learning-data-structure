/*
    binary tree implementation
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* lchild;
    struct Node* rchild;
} Node;

Node* init_node(int data, Node* lchild, Node* rchild) {
    Node* node = (Node*) malloc(sizeof(Node));
    
    node->data = data;
    node->lchild = lchild;
    node->rchild = rchild;
    
    return node;
}

void recu_inorder (Node* current_node);
void recu_preorder (Node* current_node);
void recu_postorder (Node* current_node);

int main() {
    Node* node5 = init_node (5, NULL, NULL);
    Node* node4 = init_node (4, NULL, NULL);
    Node* node3 = init_node (3, NULL, node5);
    Node* node2 = init_node (2, node4, NULL);
    Node* node1 = init_node (1, node2, node3);
    
    /*
                node1
              /      \
            node2   node3
             /        \
          node4      node5
    */
    
    recu_inorder (node1);
    printf ("\n");
    recu_preorder (node1);
    printf ("\n");
    recu_postorder (node1);
    
    return 0;
}

void recu_inorder (Node* current_node) { // recursion을 이용하여
    if (current_node != NULL) {
        recu_inorder(current_node->lchild);
        printf ("%d ", current_node->data);
        recu_inorder(current_node->rchild);
    }
}

void recu_preorder (Node* current_node) { // recursion을 이용하여
    if (current_node != NULL) {
        printf ("%d ", current_node->data);
        recu_inorder(current_node->lchild);
        recu_inorder(current_node->rchild);
    }
}

void recu_postorder (Node* current_node) { // recursion을 이용하여
    if (current_node != NULL) {
        recu_inorder(current_node->lchild);
        recu_inorder(current_node->rchild);
        printf ("%d ", current_node->data);
    }
}
