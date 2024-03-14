#include<stdio.h>

void bubbleSort(int n,int arr[]){

    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
        
    }
    
}



int main(){
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
    
    bubbleSort(n,arr);
    printf("Sorted array-\n");
    for (int i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}




