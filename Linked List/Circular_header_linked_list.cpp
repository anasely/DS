#include <iostream>


struct Node{
    int data;
    struct Node *next;
}*start, *header, *end;

class CircHeadList{
public:
    CircHeadList(){
        start = NULL;
        header = NULL;
        end = NULL;
    }
    Node *create_list(int);
    void insertion_at_beginnig();
    void insertion_at_position();
    void insertion_at_end();
    void deletion_from_position();
    void display();
};
Node *CircHeadList::create_list(int item){
    struct Node *ptr;

    ptr = struct Node;

    if(ptr == NULL){
        std::cout << "\nThe memory is not allocated";
        return;
    }
    else{
        ptr->data = item;
        ptr->next = NULL;
        return ptr;
    }
    std::cout << "\nList is created";
}
void CircHeadList::insertion_at_beginnig(){
    struct Node *ptr, *temp;
    int item;

    std::cout << "\nEnter value of node: ";
    std::cin >> item;

    temp = create_list(item);
    if(start == NULL){
        start = temp;
        start->next = NULL;
    }
    else{
        ptr = start;
        start = temp;
        start->next = ptr;
    }
    std::cout << "\nInserted Successfully !!";
}
void CircHeadList::insertion_at_position(){
    struct Node *temp, *temp1, *ptr;
    int item, position, count=0, i;

    std::cout << "\nEnter value of node: ";
    std::cin >> item;

    temp = create_list(item);

    std::cout << "\nEnter position of node: ";
    std::cin >> position;
    temp1 = start;
    while(temp1 != Null){
        temp1 = temp1->next;
        count++;
    }
    if(position == 1){
        if(start == NULL){
            start = temp;
            start->next = NULL;
        }else{
            ptr = start;
            start = temp;
            start->next = ptr;
        }
    }else if(position > 1 && position <= count){
        temp1 = start;
        for(i = 0; i < position-1; i++){
            ptr = temp1;
            temp1 = temp1->next;
        }
        ptr->next = temp;
        temp->next = temp1;
    }else{
        std::cout << "\nInvalid Position";
    }
    std::cout << "\nInserted successfully !!";
}
void CircHeadList::deletion_from_position(){
    struct Node *ptr, *temp1;
    int i, position , count=0;

    if(start == NULL){
        std::cout << "\nEmpty List";
        return;
    }
    std::cout << "\nEnter value of node: ";
    std::cin >> item;
    temp1 = start;
    
    if(position == 1){
        start = temp1->next;
    }else{
        while(temp1 != NULL){
            temp1 = temp1->next;
            count++;
        }
        if(position > 0 && position <= count){
            temp1 = start;
            for(i = 0; i < position-1; i++){
                ptr = temp1;
                temp1 = temp1->next;
            }
            ptr->next = temp1->next;
        }else{
            std::cout << "\nInvalid position";
        }
        free(temp1);
        std::cout << "\nDeleted successfully !!";
    }
}
void CircHeadList::insertion_at_end(){
    struct Node *temp, *ptr;
    int item;

    std::cout << "\nEnter value of node: ";
    std::cin >> item;

    temp = create_list(item);
    ptr = start;
    
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    end = temp;
    end->next = start;
    ptr->next = end;
    std::cout << "\nInserted successfullly at end !!";
}
void CircHeadList::display(){
    struct Node *disp, *temp;
    int c, count=0;

    if(start == NULL){
        std::cout << "\nEmpty List";
        return;
    }
    temp = start;
    while(temp->next != NULL){
        count++;
        temp = temp->next;
    }
    c = count;
    if(header == NULL){
        header->data = c;
        header->next = start;
    }
    disp = start;
    std::cout << "\nLinked List is :";
    while(disp->next != NULL){
        std::cout << disp->data << " -> ";
        disp = disp->next;
    }
}
int main(){
    CircHeadList obj;
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

        switch(choice){
            case 1:
                obj.create_list();
                break;
            case 2:
                obj.insertion_at_beginnig();
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
                std::cout << "\nWrong chocie";
                exit(0);
        }
    }
    return 0:
}