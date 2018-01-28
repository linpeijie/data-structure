#include<stdio.h>
#include"def.h"

int queue_length(LinkQueue Q){

    if(!Q.front)
        exit(0);    

    return Q->rear-Q->front-1;
}
