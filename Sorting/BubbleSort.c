// Bubble Sort
// Time Complexity: O(n^2)
#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int arr[], int size){
    for (int j=size-1; j>0; j--){
        for (int i=0;i<j;i++){
            if (arr[i] > arr[i+1]){
                swap(&arr[i], &arr[i+1]);
            }
    }
    }
}

int main(){
    int nums[] = {17, 4, 13, 8, 15, 11, 6, 14, 1};
    int n = sizeof(nums)/sizeof(nums[0]);

    printf("\n- - - - - - BUBBLE SORT - - - - - - - -\n\n");
    printf("Unsorted Array: ");
    for (int i=0;i<n;i++){
        printf("%d ", nums[i]);
    }
    printf("\n");

    BubbleSort(nums, n);

    printf(" Sorted Array : ");
    for (int i=0;i<n;i++){
        printf("%d ", nums[i]);
    }
    printf("\n\n");
    return 0;
}