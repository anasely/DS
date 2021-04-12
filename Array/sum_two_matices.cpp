#include <iostream>


int main(){
    int i, j, A[2][2], B[2][2], C[2][2];

    std::cout << "\nEnter the elements of A matrices";
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++)
            std::cin >> A[i][j];
    }
    std::cout << "\nEnter the elements of B matrices";
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++)
            std::cin >> B[i][j];
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++)
            C[i][j] = A[i][j] + B[i][j];
    }
    std::cout << "\nResult matrix is: ";
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++)
            std::cout << "\n" << C[i][j];
    }
    return 0;
}
