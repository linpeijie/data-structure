#include"def_c.h"

LNode* locate_elem_c(LinkList L,int e){
    LNode* p = L->next;

    while(p!=NULL && p->data!=e)
        p = p->next;

    return p; 
}
