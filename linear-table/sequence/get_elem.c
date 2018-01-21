#include<stdio.h>
#include"def.h"

int get_elem(Seqlist L,int i,int *e){

    if(i<1 || i>L.length)
        return 0;

    *e = L.elem[i-1];

    return *e;
}
