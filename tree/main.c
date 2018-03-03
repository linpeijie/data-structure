#include<stdio.h>
#include"def.h"
#include"extern.h"

int main(){
    BiTree T;
    char ch[100];
    int n,i;

    printf("Please enter the n numbers of Huffman Tree:");
    scanf("%d",&n);

    printf("Please enter n values:");
    for(i=0;i<n;i++)
        scanf("%c",&ch[i]);

    T = CreateHuffman(ch,n);

    return 0;
}
