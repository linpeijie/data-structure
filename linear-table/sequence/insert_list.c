#include "def.h"

bool insert_list(Seqlist *L,int i,int e){
    int *newbase;    

    if(i<1 || i> (*L).length+1)
        return false;
    
    if((*L).length >= (*L).listsize){
        newbase = (int *)malloc(sizeof(int) * ((*L).listsize+LISTINCREMENT));
        if(!newbase) return false;
        (*L).elem = newbase;
        (*L).length += LISTINCREMENT;
    }

    int *p,*q;
    q = &((*L).elem[i-1]);
    for(p = &((*L).elem[(*L).length -1]); p>=q; --p)
        *(p+1) = *p;

    *q = e;
    ++(*L).length;

    return true;
}
