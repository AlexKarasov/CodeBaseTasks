#include <iostream>

struct Node {
    Node* next;
    int data;
};

struct List {
    Node* head;
    int size;
};

void AddNode(List* list, int data) {
   
        Node* first = new Node;
        first->data = data;
        first->next = list->head;
        list->head = first;
}

void ShowList(const List* list) {

    for (Node* current = list->head; current != nullptr; current = current->next) {
        std::cout << current->data << '\n' << std::endl;
    }
}

void DeleteNode(List* list) {
    
    Node* newNode = list->head;
    list->head = newNode->next;
    delete newNode;
    

}


int main()
{
    
    List list{nullptr, 0};
    AddNode(&list, 10);
    AddNode(&list, 20);
    AddNode(&list, 30);
    ShowList(&list);
    std::cout << "____________________________________________________________________________\n" << std::endl;
    DeleteNode(&list);
    ShowList(&list);
    std::cout << "____________________________________________________________________________\n" << std::endl;
    DeleteNode(&list);
    ShowList(&list);

    return 0;
}
