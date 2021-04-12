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