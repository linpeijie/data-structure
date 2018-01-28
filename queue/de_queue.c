#include<stdio.h>
#include"def.h"

bool de_queue(LinkQueue* Q,int* e){
    if(Q->front == Q->rear)
        return false;

    QNode* p;

    p = Q->front->next; 
    (*e) = p->data;
    Q->front->next = p->next;
    
    if(Q->rear == p)
        Q->rear = Q->front;

    free(p);
    
    return true;
}
