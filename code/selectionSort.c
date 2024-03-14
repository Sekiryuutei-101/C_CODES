#include<stdio.h>
void swap(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int selectionSort(int arr[],int n){
    int min;
    for(int i =0;i<n;i++){
        min = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        if(min!=i){
            swap(&arr[min],&arr[i]);
        }
    }
}
void main(){
    int n;
    int arr[50];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array-\n");

    for (int i = 0; i<n; i++)
    {
        printf("Enter element %d of array \n",i);
        scanf("%d",&arr[i]);
    }

    selectionSort(arr,n);

    printf("Sorted array-\n");
    for (int i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}