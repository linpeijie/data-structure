#include"def_c.h"
#include"extern_c.h"

LinkList delete_elem_c(LinkList* L,int i){
    LNode* p;
    LNode* q;
    
    get_elem_c((*L),i-1,&p);
    q = p->next;

    p->next = q->next;

    free(q);

    return (*L);
}
