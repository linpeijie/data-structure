#include<stdlib.h>
#include<stdbool.h>

typedef struct BiTNode{
    int elem;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;
