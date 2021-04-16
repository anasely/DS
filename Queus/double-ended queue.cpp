#include <iostream>
#define MAX 10

class dqueue{
    int arr(MAX);
    int front, rear;
    int value, i;
public:
    dqueue(){
        front = -1;
        rear = -1;
    }
    void insertion_at_beginning();
    void insertion_at_end();
    void deletion_from_beginnig();
    void deletion_from_end();
    void display();
};
void dqueue::insertion_at_beginning(){
    std::cout << "\nEnter the elemnts to be inserted at beginnig: ";
    std::cin >> value;

    if(front == -1){
        front = 0;
        arr[++rear] = value;
        std::cout << "\nInserted successfully !!";
    }else if(front != 0){
        arr[--front] = value;
        std::cout << "\nInserted successfully!!";
    }
    else{
        std::cout << "\nOverflow error";
    }
}
void dqueue::insertion_at_end(){
    std::cout << "\nEnter the elemnts to be inserted at end: ";
    std::cin >> value;

    if(rear >= MAX-1)
        std::cout << "\nOverflow error";
    else if(front == -1){
        front += 1;
        rear += 1;
    }
    else{
        rear += 1;
    }
    arr[rear] = value;
    std::cout << "\nInserted successfully!!";
}
void dqueue::display(){
    if(front == -1)
        std::cout << "\nEmpty Queue";
    else{
        for(i = front; i <= rear; i++)
            std::cout << arr[i] << "\t";
    }
}
void dqueue::deletion_from_beginnig(){
    if(front == -1){
        std::cout << "Empty Queue";
        return;
    }
    else{
        std::cout << "\nDeleted element: " << arr[front];
        if(front == rear){
            front = -1;
            rear = -1;
            return;
        }
        else
            front += 1;
    }
}
void dqueue::deletion_from_end(){
    if(front == -1){
        std::cout << "Empty Queue";
        return;
    }
    else{
        std::cout << "\nDeleted element: " << arr[rear];
        if(front == rear){
            front = -1;
            rear = -1;
        }
        else
            rear += 1:
    }
}
int main(){
    dqueue obj;
    int choice;

    while(1){
        std::cout << "\n **** MENU ****";
        std::cout << "\n1. Insertion at beginnig";
        std::cout << "\n2. Insertion at end";
        std::cout << "\n3. Display";
        std::cout << "\n4. Deletion from beginnig";
        std::cout << "\n5. Deletion from end";
        std::cout << "\n6. Exit";
        std::cin >> choice;

        switch(choice){
            case 1:
                obj.insertion_at_beginning();
                break;
            case 2:
                obj.insertion_at_end();
                break;
            case 3:
                obj.display();
                break;
            case 4:
                obj.deletion_from_beginnig();
                break;
            case 5:
                obj.deletion_from_end();
                break;
            case 6:
                exit(0);
                break;
            default:
                std::cout << "\nWrong choice";
                break;
        }
    }
    return 0;
}