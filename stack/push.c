#include"def.h"

bool push(SqStack* S,int e){
    if((*S).top-(*S).base >= (*S).stacksize){
        (*S).base = (int*)realloc((*S).base,((*S).stacksize + STACKINCREMENT)*sizeof(int));
        if(!(*S).base)
            exit(0);

        (*S).top = (*S).base + (*S).stacksize;
        (*S).stacksize += STACKINCREMENT;
    }

        *(*S).top++ = e;

    return true;
}




