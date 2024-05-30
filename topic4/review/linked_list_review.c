/*
    선형 리스트는 순서를 가진 데이터들을 연이어서 저장한 기억공간이다.
    선형 리스트는 자주 변동이 되지 않는 데이터를 수납할 때 용이하다.
    하지만 선형 리스트의 가장 큰 단점은 overflow의 가능성과 빈번한 이동이라는 것이다.
    만약 선형 리스트의 한 원소가 삭제되어야 할 때 n - k번의 이동이 발생한다.
    선형 리스트의 한 원소가 특정 위치에 삽입되어야 할 때 n - k + 1번의 이동이 발생한다.
    또한 새로운 원소를 리스트에 삽입할 때 여분의 기억공간이 필요할 수도 있다. 
    만약 배열이 꽉 차있는데 데이터를 추가하고 싶다면 배열을 증설해야 할 것이다. (불편하다)

    이러한 선형 리스트는 연속적으로 원소를 메모리에 저장하기 때문에 이런 단점이 발생한 것이다.
    이를 해결하고자 연결 리스트를 도입한다.

    연결 리스트는 다음에 처리할 데이터의 주소를 가지고 있는 리스트이다. 
    연결 리스트는 값을 저장하는 data field, 다음에 처리해야 할 주소를 link field라 한다. 
    연결 리스트는 보통 구조체로 구현하며, 새로히 연결 리스트를 선언하여야 할 때 malloc을 이용하여 공간을 할당한다.
    삭제 시엔 free 함수를 통해 메모리 영역을 해제한다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct list {
    int data; // data field
    struct list* link; // link field
};

int main() {
    struct list *prev, *current, *head; 
    // prev는 전에 있었던 연결 리스트를 의미한다.
    // current는 현재 만들어낸 연결 리스트를 의미한다.
    // head는 가장 첫번째 연결 리스트를 의미한다.
    
    for (int i = 0; i < 3; i++) {
        int data;
        scanf ("%d", &data); // data를 입력받는다.
        
        current = (struct list *) malloc (sizeof(struct list)); // memory allocation, 새로운 연결 리스트를 생성한다.
        current->data = data; // 새로운 연결 리스트의 data field에 data를 넣는다.
        
        if (i == 0) {
            head = current; // 첫번째 리스트
        }
        
        else {
            prev->link = current; // 전에 있었던 연결 리스트의 link field에 지금의 연결 리스트의 주소를 넣는다. 
        }
        
        prev = current;
        
        if (i == 3 - 1) {
            current->link = NULL; // 마지막 링크엔 NULL값을 넣는다.
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

        if (head->link == NULL) { // 현재 연결 리스트의 link field값이 NULL 이라면
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