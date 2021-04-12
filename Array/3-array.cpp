#include <iostream>


int main(){
    int arr[3][3], i, j;

    std::cout << "\nEnter the elements of array: ";
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            std::cin >> arr[i][j];
    }

    std::cout << "\nThe array is: ";
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            std::cout << "arr["<< i <<"]["<< j <<"]=" << arr[i][j];
    }
    return 0;
}
