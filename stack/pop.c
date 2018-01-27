#include"def.h"

bool pop(SqStack* S,int* e){
    if((*S).top == (*S).base)
        return false;

    (*e) = * --(*S).top;

    return true;
}
