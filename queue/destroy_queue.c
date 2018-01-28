#include<stdio.h>
#include"def.h"

bool destroy_queue(LinkQueue* Q){
    while(Q->front){
        Q->rear = Q->front->next;
        free(Q->front);
        Q->front = Q->rear;
    }

    return true;
}
