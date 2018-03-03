/*算法设计思路：
1.先建一链表存放输入的数据。
2.从链表中找出权值最小的结点和次小的结点。
3.将2中找出的两个结点构成一颗新二叉树，根结点设为权值最小的结点放入链表中。
4.不断循环2，直到构成一棵哈夫曼树。
*/
#include"def.h"

BiTNode* CreateHuffman(char a[],int n){
    int i,j,min,secendMin;
    BiTNode **b,*q;
    b = malloc(n*sizeof(BiTNode));

    /*构建一个链表存放结点*/
    for(i=0;i<n;i++){
        b[i] = (BiTNode*)malloc(sizeof(BiTNode));
        b[i]->elem = a[i];
        b[i]->lchild=b[i]->rchild=NULL;
    }

    /*从链表中构建哈夫曼树，循环n－1次*/
    for(i=1; i<n; i++) {
        min=-1;

        /*初始化min 和 secendMin，使其指向链表的第一个结点和第二个结点，当链表中只剩两个结点时，可直接计算出结果*/
        for(j=0; j<n; j++) {
            if(b[j] != NULL && min==-1) {
                min = j;
                continue;
            }
            if(b[j] != NULL) {
                secendMin = j;
                break;
            }
        }
    
        /*找出权值最小结点和次小结点*/
        for(j = secendMin; j < n; j++) {
            if(b[j] != NULL) {
                if(b[j]->elem < b[min]->elem) {
                    secendMin = min;
                    min = j;
                } else if(b[j]->elem < b[secendMin]->elem) {
                    secendMin = j;
                }
            }
        }

        /*将上述两结点构成一棵二叉树，用q指向其根结点*/
        q = (BiTNode*)malloc(sizeof(BiTNode));
        q->elem = b[min]->elem + b[secendMin]->elem;
        q->lchild = b[min];
        q->rchild = b[secendMin];
        
        /*将上面构成的二叉树根结点权值放入链表中继续计算*/
        b[min] = q;
        b[secendMin] = NULL;
    }
    
    free(b);
    return q;
}
