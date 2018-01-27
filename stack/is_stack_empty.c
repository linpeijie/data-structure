#include"def.h"

bool is_stack_empty(SqStack S){
    if(!S)
        return exit(0);

    if(S.base != S.top)
        return false;

    return true;
}


