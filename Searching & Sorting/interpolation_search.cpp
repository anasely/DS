#include <iostream>

class interpolationsearch{
public:
    int arr[20], n, value, i, low, high, mid;
    void input();
    void display();
};
void interpolationsearch::input(){
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
void interpolationsearch::display(){
    low = 0, high = n-1;

    while(low <= high){
        mid = low+((value-arr[low])*(high-low))/(arr[high]-arr[low]);

        if(arr[mid] == value){
            std::cout << "\n" << value << ' found in the array';
            break;
        }
        else if(arr[mid] < value){
            low = mid +1;
        }
        else
            high = mid-1;
    }
}
int main(){
    interpolationsearch obj;

    obj.input();
    obj.display();

    return 0;
}
