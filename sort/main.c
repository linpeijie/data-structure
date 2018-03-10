#include<stdio.h>
#include"extern.h"

int main(){
    int arr[100];
    int n,i,j;

    printf("Please enter the length of array:");
    scanf("%d",&n);

    for(i = 1; i < n+1; i++) {
        scanf("%d",&arr[i]);
    }

    sheelSort(arr,n);

    for(i = 1; i < n+1; i++)
        printf("%d ",arr[i]);
    printf("\n");

    return 0;
}
