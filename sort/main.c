#include<stdio.h>
#include"extern.h"

int main(){
    int arr[100];
    int n,i,j;

    printf("Please enter the length of array:");
    scanf("%d",&n);

    for(i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    mergeSort(arr,0,n-1);

    for(i = 0; i < n; i++)
        printf("%d ",arr[i]);

    return 0;
}
