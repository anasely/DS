#include <iostream>
#include <stdlib.h>
#define MAX 50


class queue{
private:
    int item, i;
    int arr[MAX];
    int front;
    int rear;
public:
    queue(){
        front = 0;
        rear = 0;
    }
    void insertion(){
        if(rear == MAX-1)
            std::cout << "\nQueue is full !!";
        else{
            std::cout << "\nEnter value to insert: ";
            std::cin >> item;
            arr[rear++] = item;
            std::cout << "\nInserted successfully !!";
        }
    }
    void deletion(){
        if(front == rear){
            std::cout << "\nQueue is empty";
        }
        else{
            std::cout << "\nDeleted value is: " << arr[front];
            front++;
        }
    }
    void display(){
        for(i = front; i < rear; i++)
            std::cout << arr[i] << "\t";
    }
};
int main(){
    queue obj;
    int choice;

    while(1){
        std::cout << "\n ***** MENU *****";
        std::cout << "\n1. Insertion";
        std::cout << "\n2. Deletion";
        std::cout << "\n3. Dispaly";
        std::cout << "\n4. Exit";

        std::cin >> choice;

        switch(choice){
            case 1:
                obj.insertion();
                break;
            case 2:
                obj.deletion();
                break;
            case 3:
                obj.display();
            case 4:
                std::cout << "\nExit !!!";
                break;
            default:
                std::cout << "\nWrong choice";
                exit(0);
        }
    }
    return 0;
}