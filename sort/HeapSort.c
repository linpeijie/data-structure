#include<stdio.h>

int adjustDown(int arr[],int k,int n){
    int i;

    arr[0] = arr[k];

    for(i = 2*k; i <= n; i *= 2){
        if(i < n && arr[i] < arr[i+1])
            ++i;
        if(arr[0] >= arr[i])
            break;
        else{
            arr[k] = arr[i];
            k = i;
        }
        arr[k] = arr[0];
    }
    return 0;
}

int buildMaxHeap(int arr[],int n){
    int i;

    for(i = n/2; i > 0; i--)
        adjustDown(arr,i,n);

    return 0;
}

int heapSort(int arr[],int n){
    int temp,i;
   
    buildMaxHeap(arr,n);

    for(i = n; i > 1; i--){
        printf("%d ",arr[1]);

        temp = arr[1];
        arr[1] = arr[i];
        arr[i] = temp;
        
        adjustDown(arr,1,i-1);
    }
    
    printf("%d\n",arr[1]);

    return 0;
}
