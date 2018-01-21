#include<stdio.h>
#include"def.h"
#include"extern.h"

int main(){
    Seqlist L;
    int i,e;

    init_list_seq(&L);

    for(i=0;i<10;i++){
        L.elem[i] = i;
        printf("%d ",L.elem[i]);
    }
    L.length=10;
    
    prior_elem(L,4,&e);
    printf("\n%d\n",e);

    destroylist(&L);

    return 0;
}
