#include<stdio.h>
#include"def.h"

bool clearlist(Seqlist *L){
    if((*L).length == 0)
        return true;

    (*L).elem = NULL;

    (*L).length = 0;

    return true;
}
