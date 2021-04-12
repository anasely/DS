#include <iostream>


int linear_search(int arr[], int n, int value);
int main(){
    int arr[10], n, i, r, value;
    
    
    std::cout << "\n **** Linear Search ****";
    std::cout << "\nEnter number of elements: ";
    std::cin >> n;

    std::cout << "\nEnter the elements of array: ";
    for(i = 0; i < n; i++)
        std::cin >> arr[i];

    std::cout << "\nEnter the value to search: ";
    std::cin >> value;

    r = linear_search(arr, n, value);

    if(r == -1)
        std::cout << "\nValue not found";
    else
        std::cout << "\n" << value << " found at " << r+1 << " positiotn.";
}
int linear_search(int arr[], int n, int value){
    int i;
    for(i = 0; i < n; i++){
        if(arr[i] == value)
            return i;
    }
    return (-1);
}
