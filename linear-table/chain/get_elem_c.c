#include"def_c.h"

LNode *get_elem_c(LinkList L,int i,LNode **p){
    int j=1;
    (*p) = (LNode *)malloc(sizeof(LNode));
    (*p) = L->next;

    if(i=0) return L;

    if(i<1)  return NULL;

    while((*p) && j<i){
        (*p) = (*p)->next;
        ++j;
    }

    return (*p);
}
