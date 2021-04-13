#include <iostream>


struct Node{
    int data;
    struct Node *next;
}*end;
class CircularList{
public:
    CircularList(){
        end = NULL;
    }
    void create_list();
    void insert_at_beginning();
    void insert_at_position();
    void insert_at_end();
    void deletion();
    void display();
};
void CircularList::create_list(){
    struct Node *ptr;
    int item;
    
    ptr = new struct Node;
    
    std::cout << "\nEnter value of node: ";
    std::cin >> item;

    ptr->data = item;

    if(end == NULL){
        end = ptr;
        ptr->next = end;
    }
    else{
        ptr->next = end->next;
        end->next = pre;
        end = ptr;
    }
    std::cout << "\nList created Successfully!!";
}
void CircularList::insert_at_beginning(){
    struct Node *ptr;
    int item;

    std::cout << "\nEnter value of node: ";
    std::cin >> item;

    if(end == NULL){
        std::cout << "\List is not created";
        return;
    }
    else{
        ptr = new struct Node;

    }
}
int main(){
    CircularList obj;
    int choice;

    while(1){
        std::cout << "\n **** MENU ****";
        std::cout << "\n1. Create List";
        std::cout << "\n2. Insertion at beginnig";
        std::cout << "\n3. Insertion at spec position";
        std::cout << "\n4. Insertion at end";
        std::cout << "\5. Deletion";
        std::cout << "\n6. Display";
        std::cout << "\n7. Exit";
        std::cin >> choice;
        
        switch(choice){
            case 1:
                obj.create_list();
                break;
            case 2:
                obj.insert_at_beginning();
                break;
            case 3:
                obj.insert_at_position();
                break;
            case 4:
                obj.insert_at_end();
                break;
            case 5:
                obj.deletion();
                break;
            case 6:
                obj.display();
                break;
            case 7:
                exit(0);
                break;
            default:
                std::cout << "Worng Choice";
                break;
        }
    }
}