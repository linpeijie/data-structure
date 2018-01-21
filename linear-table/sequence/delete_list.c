#include"def.h"

bool delete_list(Seqlist *L,int i,int *e){
    if(i<1 || i>(*L).length+1)
        return false;

    int *p,*q;
    p = &((*L).elem[i-1]);
    *e = *p;
    q = (*L).elem + (*L).length+1;
    
    for(++p;p<=q;++p)
        *(p-1) = *p;

    --(*L).length;    

    return true;
}
