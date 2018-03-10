#include<stdio.h>

int straightInsertSort(int arr[],int n){
    int i,j;

    for(i = 2; i <=n; i++) { 
        if(arr[i] < arr[i-1]){
            arr[0] = arr[i];
            for(j = i-1; arr[0] < arr[j]; --j){
                arr[j+1] = arr[j];
            }
            arr[j+1] = arr[0];
        }
    }

    return 0;
}

