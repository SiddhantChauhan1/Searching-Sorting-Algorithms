// Insertion Sort
// Time Complexity: O(n^2)

#include <stdio.h>

// USING FOR LOOP
// void InsertionSort(int arr[], int n){
//     for(int i=1; i<n; i++){
//         int current = arr[i];
//         for(int j=i-1; j>=0; j--){
//             if(arr[j] > current){
//                 //Shift Right
//                 arr[j+1] = arr[j];
//                 arr[j] = current;
//             }
//         }
//     }
// }

void InsertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0){
            // Shift Right
            arr[j+1] = arr[j];
            j--;
        }
        // If smaller number encountered or first index reached
        if (j<0){
            arr[0] = current;
        }
        else{
            arr[j+1] = current;
        }

    }
}


int main(){
    int nums[] = {15, 3, 22, 8, 11, 1, 19, 6, 13, 7};
    int n = sizeof(nums)/sizeof(nums[0]);
    printf("-------- Insertion Sort --------");
    printf("\n\n");

    printf("Unsorted array: ");
    for (int i=0;i<n;i++){
        printf("%d ", nums[i]);
    }
    printf("\n");

    InsertionSort(nums, n);

    printf(" Sorted array : ");
    for (int i=0;i<n;i++){
        printf("%d ", nums[i]);
    }
    printf("\n\n");
    return 0;
}