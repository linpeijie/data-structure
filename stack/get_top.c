#include"def.h"

bool get_top(SqStack S,int* e){
    if(S.top == S.base)
        return false;

    *e = *(S.top -1);

    return true;
}
