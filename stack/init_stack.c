#include<stdio.h>
#include"def.h"

bool init_stack(SqStack* S){
    (*S).base = (int*)malloc(STACK_INIT_SIZE*sizeof(int));
    
    if(!(*S).base)
        exit(0);

    (*S).top = (*S).base;

    (*S).stacksize = STACK_INIT_SIZE;

    return true;
}
