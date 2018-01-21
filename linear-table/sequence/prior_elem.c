#include<stdio.h>
#include"def.h"

int prior_elem(Seqlist L,int cur_e,int *pre_e){
    int i;

    if(L.elem[0] == cur_e)
        return 0;

    for(i=0;L.elem[i] != cur_e;i++)

    *pre_e = L.elem[i];

    return 0;
}
