#include<stdio.h>
void revArray(int arr[])
{  int temp;
    for(int i=0; i<5/2 ;i++){
        temp = arr[i];
        arr[i]= arr[5-i];
        arr[5-i] = temp;
        }
    
    
}
int main()

{ 
    int arr[] = {2,4,7,78,69};
    for (int i = 0; i < 5; i++)
    {
        printf("the number at %d is %d\n",i,arr[i]);
    }
    
    revArray(arr);
    for (int i = 0; i < 5; i++)
    {
        printf("the number at %d is %d\n",i,arr[i]);
    }
    return 0;
}