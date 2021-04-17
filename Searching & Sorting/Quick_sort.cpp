#include <iostream>

class quicksort{
public:
    int arr[10], i, n;
    void input();
    void partition(int [], int, int, int &);
    void dispaly();
    void qsort(int [], int, int);
};
void quicksort::input(){
    std::cout << "\nEnter no of elements of array: ";
    std::cin >> n;
    std::cout << "\nEnter element " << i+1 << " : ";
    for(i = 0; i < n; i++)
        std::cin >> arr[i];
}
void quicksort::qsort(int arr1[], int beg, int end){
    int pos;

    if(beg >= end)
        return;
    
    partition(arr1, beg, end, pos);
    partition(arr1, beg, pos-1);
    qsort(arr1, pos+1, end);
}
void quicksort::partition(int arr1[], int beg, int end, int &a){
    int x, low, temp, high;

    x = arr1[beg];
    high = end;
    low = beg;

    while(low < high){
        while(arr1[low] <= x)
            low++;
        while(arr1[high] > x)
            high--;
        if(low < high){
            temp = arr1[low];
            arr1[low] = arr1[high];
            arr1[high] = temp;
        }
    }
    arr1[beg] = arr1[high];
    arr1[high] = x;
    a = high;
}
void quicksort::dispaly(){
    std::cout << "\nAfter bubble sort new array is: ";
    for(i = 0; i < n; i++)
        std::cout << "\t" << arr[i];
}
int main(){
    quicksort obj;

    obj.input();
    obj.qsort();
    obj.dispaly();

    return 0;
}
