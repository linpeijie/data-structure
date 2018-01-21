
#include"def.h"

int next_elem(Seqlist L,int cur_e,int *next_e){
    int i;

    if(L.elem[L.length-1] == cur_e)
        return 0;    

    for(i=0 ; L.elem[i]!=cur_e ; i++);
        
    *next_e = L.elem[i+1];
    
    return 0;
}
