#include"def_c.h"
#include"extern_c.h"

LinkList insert_elem_c(LinkList* L,int i,LNode* s){
    LNode* p;
    
    get_elem_c((*L),i-1,&p);
    s->next = p->next;
    p->next = s;

    return (*L);
}
