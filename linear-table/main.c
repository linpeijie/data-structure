#include<stdio.h>
#include"sequence/def.h"
#include"sequence/extern.h"

int main(){
    Seqlist L;
    int i,e;

    init_list_seq(&L);

    for(i=0;i<10;i++){
        L.elem[i] = i;
        printf("%d ",L.elem[i]);
    }
    L.length=10;
   
    printf("\n");
    delete_list(&L,3,&e); 
    for(i=0;i<L.length;i++)
        printf("%d ",L.elem[i]);
    printf("\n%d ",e);

    destroylist(&L);

    return 0;
}
