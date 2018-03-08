#include<stdio.h>
#include"def.h"
#include"extern.h"

int main(){
    BiTree T;
    int ch[100];
    int n,i;

    printf("Please enter the n numbers of Huffman Tree:");
    scanf("%d",&n);

    printf("Please enter n values:");
    for(i=0;i<n;i++)
        scanf("%d",&ch[i]);

    T = CreateHuffman(ch,n);

    print_tree(T,"pre");
    printf("\n");

    printf("The Huffman Tree's weight path length is:%d\n",weightPathLength(T,0));

    return 0;
}
