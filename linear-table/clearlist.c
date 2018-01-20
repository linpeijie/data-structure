#include<stdio.h>
#include"def.h"

bool clearlist(Seqlist *L){
    if((*L).length == 0)
        return true;

    int i;

    for(i=0;i < (*L).length;i++)
        (*L).elem[i] = 0;    

    (*L).length = 0;

    return true;
}
