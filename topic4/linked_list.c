// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>

// struct list {
//     char name[10]; // data field
//     int no; // data field
//     struct list *link; // link field
// };

// int main() {
//     struct list *lst, *prev, *head;
    
//     struct list *lst_address[3];
    
//     prev = NULL;
    
//     for (int i = 0; i < 3; i++) {
//         lst = (struct list *) malloc (sizeof(struct list));
//         lst_address[i] = lst;
        
//         printf ("%d번째 node를 입력 : ", i+1);
//         scanf ("%s %d", lst->name, &(lst->no));
//         // printf ("%s %d\n", lst->name, lst->no);
    
//         if (prev == NULL) {
//             prev = lst;
//             head = lst;
//         }
        
//         else {
//             prev->link = lst; 
//             prev = lst;
            
//             if (i == 2) {
//                 lst->link = NULL;
//             }
//         }
//     }
    
//     // for (int i = 0; i < 3; i++) {
//     //     printf ("%s %d %p\n", lst_address[i]->name, lst_address[i]->no, lst_address[i]->link);
//     // }
    
//     // for (int i = 0; i < 3; i++) {
//     //     printf ("%s %d %p deleted!\n", lst_address[i]->name, lst_address[i]->no, lst_address[i]->link);
//     //     free(lst_address[i]);
//     // }
    
//     while (true) {
//         struct list *p;
        
//         if (head == NULL) {
//             break;
//         }
        
//         // printf ("%s %d %p\n", head->name, head->no, head->link);
//         p = head;
//         head = head->link;
        
//         printf ("%s %d %p deleted!\n", p->name, p->no, p->link);
//         free(p);
//     }
    
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

struct list {
    char name[10];
    int no;
    struct list *link;
};

int main() {
    struct list *head, *compo, *prev, *next;
    int i;
    head = NULL;
    
    // head -> compo1 -> compo2 -> compo3
    
    // 1) 노드 3개 생성한 후 값을 입력받고 링크 연결하는 과정
    for (i = 0; i < 3; i++) {
        compo = (struct list *) malloc (sizeof(struct list));
        
        if (compo == NULL) {
            return -1; // heap 영역에 malloc을 하였을 때 예외 처리
        }
        
        scanf ("%s %d", compo->name, &(compo->no));
        
        if (head == NULL) {
            head = compo; // 주소값을 head에 주기
        }
        
        else {
            prev->link = compo;
        }
        
        compo->link = NULL;
        prev = compo;
    }
    
    // 2) 3개의 링크드 리스트를 차례대로 포인터 값에 의해 출력
    // 현재 head는 처음 구조체의 주소를 가르치고 있음
    next = head;
    
    for (i = 0; i < 3; i++) { // for (next=head; next; next = next->link)
        printf ("%s %d %p\n", next->name, next->no, next);
        next = next->link;
    }
    
    // 3) 3개의 노드를 차례대로 삭제해가면서 출력 (단, head 포인터 값이 변경)
    // next = head;
    
    // for (next = head; next != NULL; next = next->link) {
    //     printf ("%s %d %p deleted\n", next->name, next->no, next);
    //     free (next);
    // }
    
    while (head != NULL) {
        printf ("%s %d %p deleted\n", head->name, head->no, head);
        free(head);
        head = head->link;
    }
    
    return 0;
}