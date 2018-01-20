#include<stdio.h>
#include"def.h"
#include"extern.h"

int main(){
    Seqlist L;
    int i;

    init_list_seq(&L);

    for(i=0;i<10;i++){
        L.elem[i] = i;
        printf("%d ",L.elem[i]);
    }

    printf("\n%d\n",L.length);

    destroylist(&L);

    return 0;
}
