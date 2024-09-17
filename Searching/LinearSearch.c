// Linear Search
// Time Complexity: O(n)
#include <stdio.h>

int LinearSearch(int arr[], int size, int x){
    int flag = 0;
    for (int i=0; i<size; i++){
        if (arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main(){
    int nums[] = {5, 3, 7, 9, 2, 8, 10, 1};
    int l = sizeof(nums)/sizeof(nums[0]);

    int x;
    printf("Enter number to search: ");
    scanf("%d", &x);

    int result = LinearSearch(nums, l, x);
    if (result == -1) {
        printf("Element not found in the array");
    }
    else {
        printf("%d found at index %d", x, result);
    }
    return 0;
}