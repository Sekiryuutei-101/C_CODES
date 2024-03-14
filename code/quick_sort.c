/* 5. Write a program to implement 
Quick Sort in an integer array of size 10 using recursion.*/
#include <stdio.h>

void quicksort(int arr[], int left, int right);

int main() {
    int arr[10] = {9, 4, 2, 8, 3, 5, 1, 6, 7, 0};
    int i;

    printf("Original array: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    quicksort(arr, 0, 9);

    printf("\nSorted array: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void quicksort(int arr[], int left, int right) {
    int i, j, temp, pivot;

    if(left < right) {
        pivot = left;
        i = left;
        j = right;

        while(i < j) {
            while(arr[i] <= arr[pivot] && i < right) {
                i++;
            }

            while(arr[j] > arr[pivot]) {
                j--;
            }

            if(i < j) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;

        quicksort(arr, left, j - 1);
        quicksort(arr, j + 1, right);
    }
}
