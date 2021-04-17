#include <iostream>

class linearsearch{
public:
    int arr[20], n, value, i;
    void input();
    void display();
};

void linearsearch::input(){
    std::cout << "\nEnter no of elemnts of array: ";
    std::cin >> n;
    std::cout << "\nEnter the elements of array: ";
    for(i = 0; i < n; i++){
        std::cout << "\nEnter element " << (i+1) << " : ";
        std::cin >> arr[i];
    }
    std::cout << "\nEnter value to search: ";
    std::cin >> value;
}
void linearsearch::display(){
    int flag = 0;
    for(i = 0; i < n; i++){
        if(value == arr[i]){
            std::cout << "\n" << value << " found at " << (i+1) << " position";
            flag++;
        }
    }
    if(flag == 0)
        std::cout << "\nValue not found";
}
int main(){
    linearsearch obj;
    obj.input();
    obj.display();

    return 0;
}
