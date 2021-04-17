#include <iostream>

class insertionsort{
public:
    int arr[10], n, i, j;
    void input();
    void display();
    void i_sort();
};
void insertionsort::input(){
    std::cout << "•nEnter no of element of array: ";
    std::cin >> n;
    std::cout << "\nEnter element of array: ";
    for(i = 0; i < n; i++){
        std::cout << "\nEnter element "<< (i+1);
        std::cin >> arr[i];
    }
}
void insertionsort::i_sort(){
    int temp, min;

    for(i = 1; i < n; i++){
        temp = arr[i];
        j = i-1;
        while(temp < arr[j] && (j >= 0)){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
void insertionsort::display(){
    std::cout << "\nAfter sorting new array is: ";
    for(i = 0; i < n; i++){
        std::cout << "\t" << arr[i];
    }
}
int main(){
    insertionsort obj;

    obj.input();
    obj.i_sort();
    obj.display();

    return 0;
}
