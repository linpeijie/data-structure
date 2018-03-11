#include<stdio.h>
#include<stdbool.h>

int bubbleSort(int arr[],int n){
    int i,j,temp;
    bool flag;

    for(i = 0; i < n-1; i++){
        flag = false; 

        for(j = n-1; j > i; j--){
            if(arr[j-1] > arr[j]){
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
                flag = true;
            } 
        }

        if(flag == false)
            return 0;
    }
}
