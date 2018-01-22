#include<stdio.h>
#include"chain/def_c.h"
#include"chain/extern_c.h"

int main(){
    int e,i;
    LinkList L;
    LinkList p;

    create_list(&L);
    
    L = L->next;
    while(L!=NULL){
        printf("%d ",L->data);
        L = L->next;
    }
    return 0;
}
