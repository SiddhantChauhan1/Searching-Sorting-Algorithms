// Selection Sort
// Time Complexity: O(n^2)

#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort(int arr[], int n){
    for (int i=0;i<n-1;i++){
        int minvalueindex = i;
        for (int j=i+1; j<n; j++){
            if (arr[j] < arr[minvalueindex]){
                minvalueindex = j;
            }
        }
        swap(&arr[i], &arr[minvalueindex]);
    }
}

int main(){
    int nums[] = {17, 4, 13, 8, 15, 11, 6, 14, 1};
    int n = sizeof(nums)/sizeof(nums[0]);

    printf("----------- Selection Sort -----------\n\n");
    printf("Unsorted Array: ");
    for (int i=0;i<n;i++){
        printf("%d ", nums[i]);
    }
    printf("\n\n");

    SelectionSort(nums, n);

    printf(" Sorted Array : ");
    for (int i=0;i<n;i++){
        printf("%d ", nums[i]);
    }
    printf("\n\n");
    return 0;
}