#include"def_c.h"

/* 用＊＊双指针来实现 & 引用的功能，用尾插法建立一个单链表
*/
LinkList create_list(LinkList *L){
    LNode *s,*r;
    int elem;

    (*L) = (LNode *)malloc(sizeof(LNode));
    (*L)->next = NULL;
    r = (*L);

    printf("Enter the elem of list end with '000':");
    scanf("%d",&elem);
    while(elem!=000){
        s = (LNode *)malloc(sizeof(LNode));
        s->data = elem;
        r->next = s;
        r = s;
        scanf("%d",&elem);
    } 
    
    r->next = NULL;

    return (*L);
}
