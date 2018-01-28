#include<stdio.h>
#include"def.h"

bool queue_empty(LinkQueue Q){
    if(!Q.front)
        exit(0);

    if(Q.front != Q.rear)
        return false;
    
    return true;
}
