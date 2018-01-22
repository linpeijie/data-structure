#include<stdio.h>
#include"chain/def_c.h"
#include"chain/extern_c.h"

int main(){
    int e,i;
    LNode *L;

    create_list(&L);

    printf("\n");
    for(L=L->next; L->next!=NULL;L=L->next)
        printf("%d ",L->data);
    
    return 0;
}
