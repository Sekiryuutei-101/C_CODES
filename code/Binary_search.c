#include<stdio.h>

int binarySearch(int arr[50], int low, int high, int val){
    while(high>=low){
        int mid = high+low/2;
        if(arr[mid]== val){
            return mid;
        }
        else if(arr[mid]<val){
            low= mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[50],i,size,val,low,mid,high;
    printf("Enter size of array\n");
    scanf("%d",&size);
    printf("Enter elements of an array\n");
    for(i = 0;i<size;i++){
        printf("Element %d",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter value to be searched ");
    scanf("%d",&val);
    low = 0;
    high = size -1;
    int res = binarySearch(arr,low,high,val);
    if(res == -1){
        printf("Element not found");
    }
    else {
        printf("Element found at %d",res);
    }
    return 0;
}