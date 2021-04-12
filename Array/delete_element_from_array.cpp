#include <iostream>

int main(){
    int i, n, choice, pos, arr[10];
    std::cout << "\nEnter the number of element: ";
    std::cin >> n;
    std::cout << "\nEnter the elements of array: ";
    for(i = 0; i < 10; i++)
        std::cin >> arr[i]; 
    
    std::cout << "\n ***MENU****";
    std::cout << "\n1. deleting in beginning";
    std::cout << "\n2. deletting at spacified pos";
    std::cout << "\n3. deletting at end";
    std::cout << "\nEnter your choice";
    std::cin >> choice;

    if(n==10){
        std::cout << "Overflow error";
        exit(0);
    }
    switch(choice){
        case 1:
            for(i = 0; i < n-1; i++)
                arr[i] = arr[i+1];
            std::cout << "\nAfter deletion: ";
            for(i = 0; i <= n; i++)
                std::cout << "\t" << arr[i];
            break;
        case 2:
            std::cout << "\nEnter position: ";
            std::cin >> pos;
            for(i = pos-1; i < n-1; i++)
                arr[i] = arr[i+1];
            std::cout << "\nAfter deletion: ";
            for(i = 0; i <= n; i++)
                std::cout << "\t" << arr[i];
            break;
        case 3:
            n = n-1;
            std::cout << "\nAfter deletion: ";
            for(i = 0; i < n; i++)
                std::cout << "\t" << arr[i];
            break;
        default:
            std::cout << "Wrong choice";
            exit(0);
    }
}