#include<stdio.h>
#include"extern.h"

int main(){
    int arr[100];
    int n,i,e;

    printf("Please enter the length of arr:");
    scanf("%d",&n);

    for(i = 0; i < n; i++)
        scanf("%d",&arr[i]);

    printf("Please enter the elem that you want to search:");
    scanf("%d",&e);

    if(binarySearch(arr,n,e) != -1)
        printf("Yes!");
    else
        printf("No!");

    return 0;
}
