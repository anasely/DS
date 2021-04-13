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

int main(){
    CircularList obj;
    int choice;

    std::cin >> choice;
    switch(choice){
        case 1:
            obj.insert_at_beginning();
            break;
        case 2:
            obj.insert_at_position();
            break;
        case 3:
            obj.insert_at_end();
            break;
    }
}