#include "../sequence/def.h"

bool reverse_list(Seqlist *L){
    if((*L).length == 1)
        return true;

    int index,i;

    for(i=0; i<((*L).length/2) ; i++){
        index = (*L).elem[i];
        (*L).elem[i] = (*L).elem[(*L).length-i-1];
        (*L).elem[(*L).length-i-1] = index;
    }

    return true;
}
