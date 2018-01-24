#include<stdio.h>
#include"sequence/def.h"
#include"sequence/extern.h"

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
