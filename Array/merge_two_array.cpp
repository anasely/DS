#include <iostream>

int main(){
    int arr1[10], arr2[10], arr3[20];
    int m1, m2, s;
    int i = 0, j = 0, k = 0;

    std::cout << "\nEnter number of elements in array 1: ";
    std::cin >> m1;
    std::cout << "\nEnter element array 1: ";
    for(i = 0; i < m1; i++)
        std::cin >> arr1[i];

    std::cout << "\nEnter number of element in array 2: ";
    std::cin >> m2;
    for(s = 0; s < m2; s++)
        std::cin >> arr2[s];
    
    while(i < m1 && j < m2){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            j++;
        }
        else if(arr1[i] > arr2[j]){
            arr3[k] = arr2[j];
            j++;
            k++;
        }
        else{
            arr3[k] = arr1[i];
            k++;
            i++;
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i < m1){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while(j < m2){
        arr3[k] = arr2[j];
        k++;
        j++;
    }
    std::cout << "\nAfter mergeting new array is: ";
    for(i = 0; i < (m1+m2); i++)
        std::cout << "\t" << arr3[i];
    return 0;
}
