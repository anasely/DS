#include <iostream>


struct Node{
    int prior;
    int data;
    struct Node *next;
}*front;

class pqueue{
public:
    pqueue(){
        front = NULL;
    }
    void insertion(int value, int prior){
        struct Node *temp, *ptr;

        temp = new struct Node;

        temp->data = value;
        temp->prior = prior;

        if(front == NULL || prior <= front->prior){
            temp->next = front;
            front = temp;
        }
        else{
            ptr = front;
            while(ptr->next != NULL && (ptr->next)->prior <= prior){
                ptr = ptr->next;
            }
            temp->next = ptr->next;
            ptr->next = temp;

            std::cout << "\nInserted successfully !!";
        }
    }
    void deletion(){
        struct Node *ptr;

        if(front == NULL){
            std::cout << "Nderflow error\n";
        }
        else{
            ptr = front;
            std::cout << "\nDeleted value: " << ptr->data;
            front = front->next;
            free(ptr);
        }
    }
    void display(){
        struct Node *disp;

        disp = front;

        if(front == NULL)
            std::cout << "\nEmpty queue";
        else{
            std::cout << "Priority\t\tValue\n";
            while(disp != NULL){
                std::cout << " " << disp->prior<<"\t\t\t" << " " << disp->data << "\n";
                disp = disp->next;
            }
        }
    }
};
int main(){
    pqueue obj;
    int choice, value, prior=0;

    while(1){
        std::cout << "\n ***** MENU *****";
        std::cout << "\n1. Insertion";
        std::cout << "\n2. Deletion";
        std::cout << "\n3. Display";
        std::cout << "\n4. Exit";

        std::cin >> choice;

        switch(choice){
            case 1:
                std::cout << "\nEnter the value to be inserted: ";
                std::cin >> value;
                std::cout << "\nEnter its prior: ";
                std::cin >> prior
                obj.insertion(value, prior);
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
}