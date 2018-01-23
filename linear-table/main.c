#include<stdio.h>
#include"chain/def_c.h"
#include"chain/extern_c.h"

int main(){
    int e,i;
    LinkList L;
    LNode* p;

    create_list(&L);


    printf("enter i:");
    scanf("%d",&i);
    delete_elem_c(&L,i);
    
    p = L->next;
    while(p!=NULL){
        printf("%d",p->data); 
        p = p->next;
    }
    return 0;
}
