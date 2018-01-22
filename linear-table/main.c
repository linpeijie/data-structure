#include<stdio.h>
#include"chain/def_c.h"
#include"chain/extern_c.h"

int main(){
    int e,i;
    LinkList L;
    LNode *p;


    create_list(&L);

    get_elem_c(L,6,&p);
    printf("%d",p->data); 

    return 0;
}
