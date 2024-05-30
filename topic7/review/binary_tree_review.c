#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
    스택, 큐, 데큐는 선형구조로써 리스트를 사용한 방면, 트리와 그래프는 비선형구조로 선형적으로 저장된다고 볼 수는 없다.
    트리는 루트 노드를 기준으로 n개의 서브 트리로 구성된 자료구조로, 계층적인 표현을 할 때 유용하며, cycle을 형성하지 않는다.
    트리는 갖가지 용어가 많다. 나열해보자면 ...

    1) 관계에 관한 용어 : root, ancestor, sibling, child, parent, subtree, forest
    2) 위치에 관한 용어 : terminal (leaf), non-terminal (inside)
    3) 상태에 관한 용어 : level, depth, degree

    상태에 관한 용어가 트리의 종류에 따라서 공식들이 존재하는데, 굳이 필요 없다고 생각한다. 그때마다 트리에 관해 일반화하여 공식을 이끌어내면 될 것이다.
    k진 트리에서의 k는 가장 높은 degree를 의미하며, k진 트리는 NULL값을 가지는 포인터가 점점 노드의 갯수에 가까워짐으로 극한식으로 이끌어낼 수 있다.
    이건 당연히 좋은 현상이 아니다. NULL 포인터가 많아진다는 뜻은 기억공간을 효율적으로 사용하지 못한다는 의미가 된다.

    따라서 결국엔 k진 트리를 sibling을 이용하여 2진 트리로 구성하는 방법으로, 모든 트리를 2진 트리로 변형하여 분석하게 된다.

    트리에는 종류가 있는데, 이것도 2진 트리, 즉 binary tree 중심으로 나뉘게 된다.
    1) full binary tree : 전이진트리, 노드의 갯수는 2^k - 1
    2) complete binary tree : 완전이진트리, 노드의 갯수는 2^(k-1) < n < 2^k - 1
    3) skwed tree : 경사이진트리, 뒤틀린 트리
    4) Knuth's tree 

    이진 트리를 구성하기 위해 배열을 사용하거나 이중 연결 리스트를 사용하는데, 여기서는 이중 연결 리스트를 사용한다. 
    왜냐하면 배열은 또 빈 부분이 의도치 않게 발생하여 메모리 낭비를 초래하기 때문이다.

    이중 연결 리스트를 구조체를 이용하여 구성하는데, 가운데에는 data, 양 옆에는 link값을 대입한다. llink, rlink.
    구조체는 또 다른 형의 선언이라 볼 수 있기 때문에 추후에 구조체 형을 선언하기 위해서는 struct node *node;와 같이 struct를 함께 기입하는 것을 잊지 말자.

    쓰레드 이진 트리라는 것도 있는데, 이진 트리에서 terminal node의 NULL 포인터까지 운행에 활용하여 메모리를 극한으로 사용하는 방식이다.
*/

// 가운데에 data, 왼쪽, 오른쪽에 각각 트리의 주소값
struct node {
    struct node* lchild;
    int data;
    struct node* rchild;
};

// NULL값이 아니라면 계속 운행한다. 
// inorder, preorder, postorder가 어떤 순서로 운행되는지 알면 가운데 요소가 printf로 채워진다는 것을 금방 눈치챌 수 있을 것.
void recu_inorder (struct node *head) { 
    if (head != NULL) {
        recu_inorder(head->lchild); // 왼
        printf ("%d ", head->data); // 가
        recu_inorder(head->rchild); // 오
    }
}

void recu_preorder (struct node *head) { 
    if (head != NULL) {
        printf ("%d ", head->data); // 가
        recu_preorder(head->lchild); // 왼
        recu_preorder(head->rchild); // 오
    }
}

void recu_postorder (struct node *head) { 
    if (head != NULL) {
        recu_postorder(head->lchild); // 왼
        recu_postorder(head->rchild); // 오
        printf ("%d ", head->data); // 가
    }
}

int main() {
    int arr[4] = {5, 10, -1, -2};
    struct node *head, *point;
    
    for (int i = 0; i < 4; i++) {
        struct node *Node = (struct node *) malloc (sizeof(struct node));
        
        Node->data = arr[i];
        Node->lchild = NULL;
        Node->rchild = NULL;
        
        if (i == 0) {
            head = Node;
        }
        
        else {
            while (true) {
                if (point->data > Node->data) {
                    if (point->lchild == NULL) {
                        point->lchild = Node;
                        break;
                    }
                    
                    else {
                        point = point->lchild;
                    }
                }
                
                else if (point->data < Node->data) {
                    if (point->rchild == NULL) {
                        point->rchild = Node;
                        break;
                    }
                    
                    else {
                        point = point->rchild;
                    }
                }
            }
        }
        
        point = head;
    }
    
    printf (" in\n");
    recu_inorder(head);
    printf ("\n pre \n");
    recu_preorder(head);
    printf ("\n post \n");
    recu_postorder(head);
    
    return 0;
}