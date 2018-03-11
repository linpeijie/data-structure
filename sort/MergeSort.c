#include<stdio.h>
#include<stdlib.h>

int B[100];

int merge(int arr[],int low,int mid,int high){
    int k,i,j;

    for(k = low; k <=high; k++)
        B[k] = arr[k];
        
    for(i = low,j = mid+1,k = i; i <= mid && j <= high;k++){
        if(B[i] <= B[j])
            arr[k] = B[i++];
        else
            arr[k] = B[j++];
    }

    while(i <= mid)
        arr[k++] = B[i++];

    while(j <= high)
        arr[k++] = B[j++];

    return 0;
}


int mergeSort(int arr[],int low,int high){
    int mid;

    if(low < high){
        mid = (low + high)/2;

        mergeSort(arr,low,mid);

        mergeSort(arr,mid+1,high);

        merge(arr,low,mid,high);
    }

    return 0;
} 
