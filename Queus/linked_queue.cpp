#include <iostream>

struct Node{
    int data;
    struct Node *next;
}*front, *rear;

class LQueue{
public:
    LQueue(){
        front = NULL;
        rear = NULL;
    }
    void insertion();
    void deletion();
    void display();
};
void LQueue::insertion(){
    struct Node *temp;
    int item;

    std::cout << "\nEnter value of insert: ";
    std::cin >> item;

    temp = new struct Node;

    temp->data = item;
    temp->next = NULL;

    if(front == NULL){
        front = temp;
    }
    rear->next = temp;
    rear = temp;

    std::cout << "\nInserted successfully !!";
}
void LQueue::deletion(){
    struct Node *ptr;

    if(front == NULL){
        std::cout << "\nQueue is empty";
        return;
    }else{
        ptr = front;
        front =front->next;
        std::cout << "\nDeleted value is: " << ptr->data;
        delete ptr;
    }
}
void LQueue::display(){
    struct Node *newnode = front;

    if(front == NULL){
        std::cout << "\nQueue is empty";
        return;
    }
    while(newnode != NULL){
        std::cout << newnode->data << " -> ";
        newnode = newnode->next;
    }
    std::cout << "\nNULL";
}
int main(){
    LQueue obj;
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