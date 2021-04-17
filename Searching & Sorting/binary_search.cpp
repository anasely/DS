#include <iostream>

class binarysearch{
public:
    int arr[20], n, value, i, start, end, mid;
    void input();
    int display();
};
void binarysearch::input(){
    std::cout << "\nEnter no of elements of array: ";
    std::cin >> n;
    std::cout << "\nEnter the elements of array: ";
    for(i = 0; i < n; i++){
        std::cout << "\nEnter element " << (i+1) << " : ";
        std::cin >> arr[i];
    }
    std::cout << "\nEnter value to search: ";
    std::cin >> value;
}
void binarysearch::display(){
    start = 0, end = n-1;

    while(start <= end){
        mid = (start+end) / 2;

        if(arr[mid] == value){
            std::cout << "\n" << value << " found in the array";
            break;
        }
        else if(arr[mid] < value){
            start = mid + 1;
        }
        else
            end = mid + 1;
    }
}
int main(){
    binarysearch obj;

    obj.input();
    obj.display();

    return 0;    
}

