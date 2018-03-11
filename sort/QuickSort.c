#include<stdio.h>

int partition(int arr[],int low,int high){
    int pivot = arr[low];

    while(low < high){
        while(low < high && arr[high] >= pivot)
            --high;
        arr[low] = arr[high];

        while(low < high && arr[low] <= pivot)
            ++low;
        arr[high] = arr[low];
    }
    
    arr[low] = pivot;
    return low;
}

int quickSort(int arr[],int low,int high){

    if(low < high){
        int pivotpos = partition(arr,low,high);

        quickSort(arr,low,pivotpos-1);
        quickSort(arr,pivotpos+1,high);
    }

    return 0;
}
