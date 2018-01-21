#include<stdio.h>
#include"def.h"
#include"extern.h"

bool compare(int le,int e){
    if(le == e)
        return true;

    return false;
}

int main(){
    Seqlist L;
    int i,e;

    init_list_seq(&L);

    for(i=0;i<10;i++){
        L.elem[i] = i;
        printf("%d ",L.elem[i]);
    }
    L.length=10;

   bool (*f)(int,int) = compare;
    e=locate_elem(L,3,f);
    printf("\n%d\n",e);

    clearlist(&L);

    if(listempty(L))
        printf("empty list");

    destroylist(&L);

    return 0;
}
