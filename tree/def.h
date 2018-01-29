#include<stdlib.h>
#include<stdbool.h>

typedef struct BiTNode{
    char elem;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;
