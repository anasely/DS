#include <iostream>

int main(){
    int i, j, min, pos, arr[10], n, temp;

    std::cout << "\nEnter number of element in the array: ";
    std::cin >> n;

    std::cout << "\nEnter elements array: ";
    for(i = 0; i < n; i++)
        std::cin >> arr[i];

    std::cout << "\n *** Selection Sort ***";
    for(i = 1; i < n; i++){
        min = arr[i-1];
        pos = i-1;
        for(j = i; j < n; j++){
            if(arr[j] < min){
                min = arr[j];
                pos = j;
            }
        }
        if(pos != i-1){
            temp = arr[pos];
            arr[pos] = arr[i-1];
            arr[i-1] = temp;
        }
    }
    std::cout << "\nAfter sorting new array is: ";
    for(i = 0; i < n; i++)
        std::cout << "\t" << arr[i];

    return 0;
}