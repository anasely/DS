#include <iostream>

int main(){
    int num[5];
    std::cout << "\nEnter the elements of array: \n";
    for(int i =0; i < 5; i++)
        std::cin >> num[i];

    for(int i = 0; i < 5; i++)
        std::cout<< "\t" << num[i];

    return 0;
}
