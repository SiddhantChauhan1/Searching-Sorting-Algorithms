// Merge Sort [ using recursion ]
// Time Complexity: O(n log n)

#include<stdio.h>

void Merge(int arr[], int l, int mid, int r){
    int n1 = mid - l+1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];

    for(int i=0; i<n1; i++){
        a[i] = arr[l+i];
    }
    for(int i=0; i<n2; i++){
        b[i] = arr[mid+1+i];
    }

    int i = 0;
    int j = 0;
    int k = l;
    while(i<n1 && j<n2){
        if (a[i]<b[j]){
            arr[k] = a[i];
            i++;
            k++;
        }
        else{
            arr[k] = b[j];
            j++;
            k++;
        }
    }

    while(i<n1){
        arr[k] = a[i];
            i++;
            k++;
    }
    while(j<n2){
        arr[k] = b[j];
            j++;
            k++;
    }
}

void Mergesort(int arr[], int l, int r){
    if (l<r){
        int mid = (l+r)/2;
        Mergesort(arr, l, mid);
        Mergesort(arr, mid+1, r);

        Merge(arr, l, mid, r);
    }
}

int main(){
    printf("---------- MERGE SORT ----------\n");
    int nums[] = {42, 17, 93, 58, 12, 77, 25, 64, 89, 31};
    int n = sizeof(nums)/sizeof(int);

    printf("\nOriginal array: ");
    for (int i=0; i<n; i++){
        printf("%d ", nums[i]);
    }

    Mergesort(nums, 0, n);

    printf("\n Sorted array : ");
    for (int i=0; i<n; i++){
        printf("%d ", nums[i]);
    }
    return 0;
}
