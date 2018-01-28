#include<stdio.h>
#include"def.h"

bool clear_queue(LinkQueue* Q){
    if(!Q->front)
        exit(0);

    QNode* p;

    while(Q->front != Q->rear){
        p = Q->front;
        Q->front = Q->front->next;
        free(p);
    }
   
    return true;
}
