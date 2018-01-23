#include<stdio.h>
#include"chain/def_c.h"
#include"chain/extern_c.h"

int main(){
    int e,i;
    LinkList L;
    LNode* p;

    create_list(&L);


    printf("what position's number do you want:");
    scanf("%d",&i);
    get_elem_c(L,i,&p);
    printf("%d",p->data); 

    return 0;
}
