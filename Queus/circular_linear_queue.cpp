#include <iostream>
#define MAX 10

class cqueue{
    int arr[MAX], item;
    int front;
    int rear;
public:
    cqueue(){
        front = -1;
        rear = -1;
    }
    void insertion();
    int deletion();
    void display();
};
void cqueue::insertion(){
    if((front == 0 && rear == MAX-1) || (rear+1 == front)){
        std::cout << "\nCircular Queue is Full";
    }else{
        std::cout << "\nEnter value to insert: ";
        std::cin >> item;

        if(rear == MAX-1)
            rear = 0;
        else{
            rear++;
            arr[rear] = item;
            std::cout << "\nInserted successfully !!";
        }
        if(front == -1)
            front = 0;
    }
}
int cqueue::deletion(){
    int i;

    if(front == -1)
        std::cout << "\nCircular Queue is Empty";
    else{
        if(rear < front){
            for(i = front; i <= MAX-1; i++)
                std::cout << arr[i] << "\t";
            for(i = 0; i <= rear; i++)
                std::cout << arr[i] << "\t";
        }
        else{
            for(i = front; i <= rear; i++)
                std::cout << arr[i] << "\t";
        }
    }
}
int main(){
    cqueue obj;
    int choice;

    while(1){
        std::cout << "\n ***** MENU *****";
        std::cout << "\n1. Insertion";
        std::cout << "\n2. Deletion";
        std::cout << "\n3. Display";
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