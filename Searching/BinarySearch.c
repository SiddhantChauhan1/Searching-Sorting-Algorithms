// Binary Search
// Time Complexity: O(log n)
#include <stdio.h>

int binarySearch(int arr[], int size, int x){
    int l = 0;
    int r = size - 1;
    int mid = (l+r)/2;
    
    while (l <= r){
        if (arr[mid] == x){
            return mid;
        }
        else if(arr[mid] > x){
            r = mid - 1;
            mid = (l+r)/2;
        }
        else{
            l = mid + 1;
            mid = (l+r)/2;
        }
    }
    return -1;
}

int main(){
    // Array must be sorted
    int nums[9] = {2, 3, 5, 7, 8, 9, 10, 12, 13};
    int n = sizeof(nums)/sizeof(nums[0]);
    int x;
    printf("Enter number to search: ");
    scanf("%d", &x);

    int result = binarySearch(nums, n, x);
    if (result == -1){
        printf("Element %d not found in the array", x);
    }
    else{
        printf("%d Found at index %d", x, result);
    }
    return 0;
}