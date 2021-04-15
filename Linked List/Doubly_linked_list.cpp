#include <iostream>


struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
}*start;

class DoublyList{
public:
    DoublyList(){
        start = NULL;
    }
    void create_list();
    void insertion_at_beginning();
    void insertion_at_position();
    void deletion();
    void display();
};
void DoublyList::create_list(){
    struct Node *ptr, *temp;
    int item;

    ptr = new struct Node;
    std::cout << "\nEnter the value: ";
    std::cin >> item;

    ptr->data = item;
    ptr->next = NULL;
    if(start == NULL){
        ptr->prev = NULL;
        start = ptr;
    }
    else{
        temp = start;
        while(temp->next != NULL){
            temp = temp->next;
            temp->next = ptr;
            ptr->prev = ptr;
        }
        std::cout << "\nList created Successfully !!";
    }
}
void DoublyList::insertion_at_beginning(){
    if(start == NULL){
        std::cout << "\List is not created";
        return;
    }
    struct Node *ptr1;
    int item;

    std::cout << "\nEnter value of node: ";
    std::cin >> item;

    ptr1 = new struct Node;

    ptr1->prev = start;
    ptr1->data = item;
    ptr1->next = start;

    start = ptr1;

    std::cout << "\nInserted Successfully at beginnig !!";
}
void DoublyList::insertion_at_position(){
    struct Node *temp, *ps;
    int item, position, i;

    if(start == NULL){
        std::cout << "\nList is not created";
        return;
    }
    std::cout << "\nEnter value of node: ";
    std::cin >> item;
    std::cout << "\nEnter position of node: ";
    std::cin >> position;

    ps = start;
    for(i = 0; i < position-1; i++){
        ps = ps->next;
        if(ps == NULL){
            std::cout << "\nInvalid position";
            return;
        }
    }
    temp = new struct Node;
    temp->data = item;
    temp->next = temp;
    if(ps->next == NULL){
        ps->next = temp;
        temp->next = NULL;
        temp->prev = ps;
    }
    else{
        temp->next = ps->next;
        (temp->next)->prev = temp;
        ps->next = temp;
        temp->prev = ps;
    }
    std::cout << "\nInserted Successfully !!";
}
void DoublyList::deletion(){
    struct Node *ptr1, *temp1;
    int i, item;

    std::cout << "\nEnter value of node to be deleted: ";
    std::cin >> item;

    if(start->data = item){
        temp1 = start;
        start = start->next;
        start->prev = NULL;
        std::cout << "\nDeleted successfully !!";
        free(temp1);
        return;
    }
    ptr1 = start;
    while((ptr1->next)->next != NULL){
        if((ptr1->next)->data == item){
            temp1 = ptr1->next;
            ptr1->next = temp1->next;
            std::cout << "\nDelted successfully !!";
            free(temp1);
            return;
        }
        ptr1 = ptr1->next;
    }
    if(ptr1->next->data == item){
        temp1 = ptr1->next;
        free(temp1);
        ptr1->next = NULL;
        std::cout << "\nDeleted successfully!!";
        return;
    }
    std::cout << "Element not found";
}
void DoublyList::display(){
    struct Node *disp:

    if(start == NULL){
        std::cout << "\nEmpty List";
        return;
    }
    disp = start;
    std::cout << "\nLinked List is: ";
    while(disp != NULL){
        std::cout << disp->data <<" -> ";
        disp = disp->next;
    }
    std::cout << "\nNULL"; 
}
int main(){
    DoublyList obj;
    int choice;

    while(1){
        std::cout << "\n **** MENU ****";
        std::cout << "\n1. Create List";
        std::cout << "\n2. Insertion at beginnig";
        std::cout << "\n3. Insertion at spec position";
        std::cout << "\n4. Deletion";
        std::cout << "\n5. Display";
        std::cout << "\n6. Exit";
        std::cin >> choice;

        swicth(choice){
            case 1:
                obj.create_list()
                break;
            case 2:
                obj.insertion_at_beginning();
                break;
            case 3:
                obj.insertion_at_position();
                break;
            case 4:
                obj.deletion();
                break;
            case 5:
                obj.diplay();
                break;
            case 6:
                exit(0);
                break;
            default:
                std::cout << "\nInvalid choice";
                exit(0);
        }
    }
    return 0;
}

