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

    temp = create_list(item)
    
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
        for(i = 1; i < position; i++){
            ptr = temp1;
            temp1 = temp1->next;
        }
        ptr->next = temp;
        temp->next = temp1;
    }
    else{
        std::cout << "\nInvalid Position";
        ecit(0);
    }
    std::cout << "\nInserted Successfully !!";
}
int main(){
    Singlylist obj;
    int choice;

    std::cout << "\n *** MENU ***";
    std::cout << "\n1. Insertion at beginnig";
    std::cout << "\2. Insertion at specified position";
    std::cout << "\n3. Insertion at the end";
    std::cout << "\n4. Deletion from spec position";
    std::cout << "\n5. Display";
    std::cout << "\n6. Exit";
    std::cin >> choice;
    switch (choice){
        case 1:
            obj.inserition_at_beginning();
            break;
        case 2:
            obj.insertion_at_position();
            break;
        case 3:
            obj.insertion_at_end();
            break;
        case 4:
            obj.deletion_from_position();
            break;
        case 5:
            obj.display();
            break;
        case 6:
            exit(0);
            break;
        default:
            std::cout << "Wrong choice";
            exit(0);
    }
    return 0;
}