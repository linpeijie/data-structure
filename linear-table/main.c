#include<stdio.h>
#include"chain/def_c.h"
#include"chain/extern_c.h"

int main(){
    int e,i;
    LinkList L;

    create_list(&L);


    printf("what number do you want:");
    scanf("%d",&e);
    LNode* p = locate_elem_c(L,e);
    printf("%d",p->data); 

    return 0;
}
