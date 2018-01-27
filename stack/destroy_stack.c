#include"def.h"

bool destroy_stack(SqStack* S){
    if(!S)
        return true;

    free((*S).base);

    (*S).stacksize = 0;    

    return true;
}
