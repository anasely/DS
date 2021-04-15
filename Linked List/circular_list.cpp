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
        end->next = ptr;
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
        std::cout << "\nList is not created";
        return;
    }
    else{
        ptr = new struct Node;
        ptr->data = item;
        ptr->next = end->next;
        end->next = ptr;
        std::cout << "\ıInserted Successfully at beginning !!";
    }
}
void CircularList::insert_at_position(){
    struct Node *temp, *temp1;
    int item, position, i;

    if(end == NULL){
        std::cout << "List is not empty";
        return;
    }
    std::cout << "\nEnter value of node: ";
    std::cin >> item;
    std::cout << "\nEnter position of node: ";
    std::cin >> position;

    temp1 = end->next;
    for(i = 0; i < position-1; i++){
        temp1 = temp1->next;
        if(temp1 = end->next){
            std:cout << "Invalid Position";
            return;
        }
    }
    temp = new struct Node;
    temp->next = temp1->next;
    temp->data = item;
    temp1->next = temp;
    
    std::cout << "\nInserted Successfully !!";
}
void CircularList::insert_at_end(){
    struct Node *temp;
    int item;

    std::cout << "\nEnter value of node: ";
    std::cin >> item;

    temp = new struct Node;
    end = temp;
    std::cout << "\nInserted Successfully !!";

}
void CircularList::deletion(){
    struct Node *ptr, *temp1;

    int i, item;
    std::cout << "\nEnter value of node to be deleted: ";
    std::cin >> item;
    temp1 = end->next;

    if(end->next == end && end->data == item){
        ptr = end;
        end = NULL;
        free(ptr);
        std::cout << "\nDeleted Successuflly !!";
        return;
    }
    if(temp1->data == item){
        ptr = temp1;
        end->next = temp1->next;
        free(ptr);
        std::cout << "\nFirst element is deleted successfully !!!!";
        return;
    }
    while(temp1->next != end){
        if((temp1->next)->data == item){
            ptr = temp1->next;
            temp1->next = ptr->next;
            free(ptr);
            std::cout << "\nElement Deleted is: " << item;
            return;
        }
        temp1 = temp1->next;
    }
    if((temp1->next)->data == item){
        ptr = temp1->next;
        temp1->next = end->next;
        free(ptr);
        std::cout << "\nDeleted successfully!!";
        end = temp1;
        return;
    }
    std::cout << "\nDeleting successuflyy!!";
}
void CircularList::display(){
    struct Node *disp;

    if(end == NULL){
        std:cout << "\nEmpty List";
        return;
    }
    disp = end->next;
    std::cout << "\nLinked list is: ";
    while(disp->next != start){
        std::cout << disp->next;
    }
    std::cout << disp->data;
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
    return 0;
}
