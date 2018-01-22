#include"def_c.h"

int create_list(LinkList L){
    LNode *s;
    int elem;

    L = (LNode *)malloc(sizeof(LNode));
    L->next = NULL;

    scanf("Enter the elem of list,end with 000:%d",&elem);
    while(elem!=000){
        s = (LNode *)malloc(sizeof(LNode));
        s->data = elem;
        s->next = L->next;
        L->next = s;
        scanf("%d",&elem);
    }    

    return 0;
}
