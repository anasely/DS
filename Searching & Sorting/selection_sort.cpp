#include <iostream>

class selectionsort{
public:
    int arr[20], n, i, j;
    void input();
    void display();
    void ssort();
};
void selectionsort::input(){
    std::cout << "•nEnter no of element of array: ";
    std::cin >> n;
    std::cout << "\nEnter element of array: ";
    for(i = 0; i < n; i++){
        std::cout << "\nEnter element "<< (i+1);
        std::cin >> arr[i];
    }
}
void selectionsort::ssort(){
    int temp, min;
    for(i = 0; i < n; i++){
        min = i;
        for(j = i+1; j < n; j++){
            if(arr[min] > arr[j])
                min = j;
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
void selectionsort::display(){
    
    std::cout << "\nAfter sorting new array is: ";
    for(i = 0; i < n; i++){
        std::cout << "\t" << arr[i];
    }
}

int main()(
    selectionsort obj;

    obj.input();
    obj.ssort();
    obj.display();


    return 0;
)