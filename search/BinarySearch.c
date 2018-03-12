#include<stdio.h>

int binarySearch(int arr[],int n,int key){
    int low = 0,high = n-1,mid;

    while(low < high){
        mid = (low + high)/2;

        if(arr[mid] == key)
            return mid;
	else if(arr[mid] > key)
           high = mid - 1;
        else
           low = mid + 1;
    }

    return -1;
}
