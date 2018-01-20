#include<stdio.h>
#include"def.h"

bool destroylist(Seqlist *L){
    if(!L)
        return true;
    
    free((*L).elem);

    (*L).length = 0;  

    return true;
}
