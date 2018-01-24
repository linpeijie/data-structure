#include<stdio.h>
#include"../sequence/def.h"
#include"../sequence/extern.h"

int delete_min_elem(Seqlist L){
    int min,i,j,index;

    if(L.length == 0)
        return 0;
    
    min = L.elem[0];
    index = 0;
    for(i=0;i<L.length;i++){
        if(L.elem[i] < min){
            min = L.elem[i];
            index = i;
        }
    }

    L.elem[index] = L.elem[L.length-1];
    L.length--;    

    return min;
}

int main(){
    int min,n=0,e;
    Seqlist L;
    init_list_seq(&L);

    create_list(&L);
    
    min = delete_min_elem(L);
    printf("%d",min);
         
    return 0;
}
