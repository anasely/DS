#include <stdio.h>


int interpolationsearch(int arr[], int l, int g, int x){
    int pos;
    // Since array is sorted, an element present
    // in array must be in range defined by corner

    if(l <= g && x >= arr[l] && x <= arr[g]){
        pos = l + (((double)(g-l) / (arr[g] - arr[l])) * (x - arr[l]));

        // Condition of target found

        if(arr[pos] == x)
            return x;

        // If x is larger, x is in right sub array
        else if(arr[pos] < x)
            return interpolationsearch(arr, pos+1, g, x);

        // If x is smaller, x is in left sub array
        else if(arr[pos] > x)
            return interpolationsearch(arr, l, pos-1, x);
    }
    return -1;
}
int main(){
    // Array of items on which search will

    int arr[] = {10,13,13,16,18,19,20,21,22,23,24,33,35,42,47};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 10;  // Element to be searched
    int index = interpolationsearch(arr, 0, n-1, x);

    if(index != -1)
        printf("Element found at index %d", index);
    else
        printf("Element not found");

    return 0;
}