#include <iostream>

int main(){
    // Inserting at beginning
    int i, n, pos, choice, value, arr[10];
    std::cout << "\nEnter the number of element: ";
    std::cin >> n;
    std::cout << "\nEnter the elements of array: ";
    for(i = 0; i < 10; i++)
        std::cin >> arr[i]; 

    std::cout << "\n ***MENU****";
    std::cout << "\n1. Insertion in beginning";
    std::cout << "\n2. Inserting at spacified pos";
    std::cout << "\n3. Inserting at end";
    std::cout << "\nEnter your choice";
    std::cin >> choice;

    if(choice == 0){
        std::cout << "Overflow error";
        exit(0);
    }
    switch(choice){
        case 1:
            for(i = n-1; i >= 0; i--)
                arr[i+1] = arr[i];
            std::cout << "\nEnter new value: ";
            std::cin >> value;
            arr[0] = value;
            std::cout << "\nAfter insertion array is: ";
            for(i = 0; i <= n; i++)
                std::cout << arr[i];
            break;
        case 2:
            std::cout << "\nEnter position: ";
            std::cin >> pos;
            for(i = n-1; i >= pos-1; i++)
                arr[i+1] = arr[i];
            std::cout << "\nEnter new value: ";
            std::cin >> value;
            arr[pos-1] = value;
            std::cout << "\nAfter inserting array is: ";
            for(i = 0; i <= n; i++)
                std::cout << "\t" << arr[i];
            break;
        case 3:
            std::cout << "\nEnter new value: ";
            std::cin >> value;
            arr[n] = value;
            std::cout << "\nAfter inserting array is: ";
            for(i = 0; i <= n; i++)
                std::cout << "\t" << arr[i];
            break;
        default:
            std::cout << "\nWrong Choice";
            exit(0);
    }
}