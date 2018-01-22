#include"def_c.h"

int length_c(LinkList L){
    int length;
    
    for(length=0; L->next!=NULL ;length++)
        L = L->next;
    
    return length;
}
