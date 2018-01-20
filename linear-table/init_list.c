#include<stdio.h>
#include"def.h"

bool init_list_sq(Sqlist *L){
    /* Init a linear list
    */
    
    (*L).length = 0;
    
    return true;
}

bool init_list_seq(Seqlist *L){
    /* create a empty linear list
    */

    (*L).elem = (int *)malloc(LIST_INIT_SIZE *sizeof(int));
    
    if(!(*L).elem)
        return false;

    (*L).length = 0;
    (*L).listsize = LIST_INIT_SIZE;
   
    return true;
}

