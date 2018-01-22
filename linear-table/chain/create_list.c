#include"def_c.h"

LinkList create_list(LinkList L){
    LNode *s;
    int elem;

    L = (LNode *)malloc(sizeof(LNode));
    L->next = NULL;

    printf("Enter the elem of list end with '9999':");
    scanf("%d",&elem);
    while(elem!=9999 ){
        s = (LNode *)malloc(sizeof(LNode));
        s->data = elem;
        s->next = L->next;
        L->next = s;
        scanf("%d",&elem);
    } 

    return L;
}
