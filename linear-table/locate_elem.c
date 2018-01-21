#include<stdio.h>
#include"def.h"

int locate_elem(Seqlist L,int e,bool (*compare)(int,int)){
    if(!L.elem || L.length==0)
        return 0;
    int i;

    for(i=0;i<L.length;i++)
        if((*compare)(L.elem[i],e))
            return i+1;
}
