#include <iostream>

class bubblesort{
public:
    int arr[20], n, i, j;
    void input();
    void display();
    void bsort();
};
void bubblesort::input(){
    std::cout << "\nEnter no of elements of array: ";
    std::cin >> n;
    std::cout << "\nEnter element " << i+1 << " : ";
    for(i = 0; i < n; i++)
        std::cin >> arr[i];
}
void bubblesort::display(){
    std::cout << "\nAfter bubble sort new array is: ";
    for(i = 0; i < n; i++)
        std::cout << "\t" << arr[i];
}
void bubblesort::bsort(){
    int temp;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    bubblesort obj;

    obj.input();
    obj.bsort();
    obj.display();

    return 0;
}