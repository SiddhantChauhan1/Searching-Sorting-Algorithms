// Quick Sort
// Time Complexity: O(nlogn)


#include<stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quickSort(int arr[], int s, int e){
    if(s >= e){
        return;
    }
    // Choose and place pivot element at right position
    int count = 0;
    for(int x=s+1; x<=e; x++){
        if(arr[x]<arr[s]) count++;
    }
    int p = s+count;
    swap(&arr[p], &arr[s]);

    // Partition the array
    int i = s;
    int j = e;
    while(i<p && j>p){
        if(arr[i] < arr[p]) i++;
        if(arr[j] > arr[p]) j--;
        if(arr[i] > arr[p] && arr[j] < arr[p]){
            swap(&arr[i], &arr[j]);
            i++;
            j--;
        }
    }
    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);
}

int main(){
    int nums[] = {5, 3, 8, 2, 4, 1, 7};
    int n = sizeof(nums)/sizeof(int);
    printf("\n--------- | Quick Sort | ----------\n");
    printf("\nArray before Sorting: ");
    for(int i=0; i<n; i++){
        printf("%d ", nums[i]);
    }

    quickSort(nums, 0, n-1);

    printf("\nArray  after Sorting: ");
    for(int i=0; i<n; i++){
        printf("%d ", nums[i]);
    }
    printf("\n\n");
    return 0;
}