#include"def.h"

int stack_length(SqStack S){
    int length;

    if(!(&S))
        return -1;

    length = S.top - S.base;

    return length;
}
