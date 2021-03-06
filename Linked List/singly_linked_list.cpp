#include <iostream>


struct Node{
    int info;
    struct Node *next;
}*start;

class Singlylist{
public:
    Singlylist(){
        start = NULL;
    }
    Node *create_list(int);
    void inserition_at_beginning();
    void insertion_at_position();
    void insertion_at_end();
    void deletion_from_position();
    void display();
};
Node *Singlylist::create_list(int item){
    struct Node *ptr;

    ptr = new struct Node;
    
    if(ptr == NULL){
        std::cout << "\nThe memory is not allocated";
        return 0;
    }
    else{
        ptr->info = item;
        ptr->next = NULL;
        return ptr;
    }
}
void Singlylist::inserition_at_beginning(){
    struct Node *ptr1, *temp;
    int item;

    std::cout << "\nEnter value of node: ";
    std::cin >> item;

    temp = create_list(item);
    
    if(start == NULL){
        start = temp;
        start->next = NULL;
    }
    else{
        ptr1 = start;
        start = temp;
        start->next = ptr1;
    }
    std::cout << "\nInserted Successfully at beginnig !!";
}
void Singlylist::insertion_at_position(){
    struct Node *temp, *temp1, *ptr;
    int item, position, count=0;

    std::cout << "\nEnter value of node: ";
    std::cin >> item;

    temp = create_list(item);
    std::cout << "\nEnter posisiotn of node: ";
    std::cin >> position;

    temp1 = start;
    while(temp1 != NULL){
        temp1 = temp1->next;
        count++;
    }
    if(position == 1){
        if(start == NULL){
            start = temp;
            start->next = NULL;
        }
        else{
            ptr = start;
            start = temp;
            start->next = ptr;
        }
    }
    else if(position > 1 && position <= count){
        temp1 = start;
        int i;
        for(i = 1; i < position; i++){
            ptr = temp1;
            temp1 = temp1->next;
        }
        ptr->next = temp;
        temp->next = temp1;
    }
    else{
        std::cout << "\nInvalid Position";
        exit(0);
    }
    std::cout << "\nInserted Successfully !!";
}
void Singlylist::insertion_at_end(){
    struct Node *ptr1, *temp;
    int item;

    std::cout << "\nEnter value of node: ";
    std::cin >> item;

    temp = create_list(item);
    ptr1 = start;


    while(ptr1->next != NULL){
        ptr1 = ptr1->next;
    }
    temp->next = NULL;
    ptr1->next = temp;

    std::cout << "\nInserted successfully !!";
}
void Singlylist::deletion_from_position(){
    struct Node *ptr, *temp1;
    int item, position, i, count=0;

    if(start == NULL){
        std::cout << "\nThe memory not allocated";

    }
    std::cout << "\nEnter position of node: ";
    std::cin >> position;
    temp1 = start;
    if(position == 1)
        start = temp1->next;
    else{
        while(temp1 != NULL){
            temp1 = temp1->next;
            count++;
        }
        if(position > 0 && position <= count){
            temp1 = start;
            for(i = 1; i < position; i++){
                ptr = temp1;
                temp1 = temp1->next;
            }
            ptr->next = temp1->next;
        }
        else{
            std::cout << "\nInvalid position";
        }
        free(temp1);
        std::cout << "\nDeleted successfully !!!";
    }
}
void Singlylist::display(){
    struct Node *disp;
    if(start == NULL){
        std::cout << "\nEmpty list";
        return;
    }
    disp = start;
    std::cout << "\nLinked List is: ";
    while(disp != NULL){
        std::cout << disp->info << " -> ";
        disp = disp->next;
    }
    std::cout << "NULL";
}
int main(){
    Singlylist obj;
    int choice;

    while(1){
        std::cout << "\n *** MENU ***";
        std::cout << "\n1. Create list";
        std::cout << "\n2. Insertion at beginnig";
        std::cout << "\n3. Insertion at specified position";
        std::cout << "\n4. Insertion at the end";
        std::cout << "\n5. Deletion from spec position";
        std::cout << "\n6. Display";
        std::cout << "\n7. Exit";
        std::cin >> choice;
        switch (choice){
            case 1:
                obj.create_list();
                break;
            case 2:
                obj.inserition_at_beginning();
                break;
            case 3:
                obj.insertion_at_position();
                break;
            case 4:
                obj.insertion_at_end();
                break;
            case 5:
                obj.deletion_from_position();
                break;
            case 6:
                obj.display();
                break;
            case 7:
                exit(0);
                break;
            default:
                std::cout << "Wrong choice";
                exit(0);
        }
    }
    return 0;
}