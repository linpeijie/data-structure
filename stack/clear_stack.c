#include"def.h"

bool clear_stack(SqStack* S){
    if(!S)
        return false;

    (*S).top = (*S).base;

    (*S).stacksize = 0;

    return true;
}
