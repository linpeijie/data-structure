#include<stdio.h>
#include"def.h"

int get_elem(Seqlist L,int i,int *e){

    *e = L.elem[i-1];

    return *e;
}
