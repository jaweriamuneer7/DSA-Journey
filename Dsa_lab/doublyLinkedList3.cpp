// DSA LAB 6 Task 2     section 3C-EVEINING
// Jaweria Muhammad Muneer   CSC-25F-601
#include<iostream>

struct Node {
    int rollno;
    Node* next;
    Node* prev;
};

int main() {
    int userIn;
    std::cout << "Enter value to add: ";
    std::cin >> userIn;
    std::cout << std::endl; 
    Node* head = new Node{12, nullptr, nullptr};
    Node* second = new Node{24, nullptr, nullptr};
    Node* third = new Node{36, nullptr, nullptr};
   

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    
    Node* current = head;
    while(current->next!=nullptr) {
        current = current->next;

    }
    
    Node* newNode = new Node{userIn, nullptr, nullptr};
    newNode->next = nullptr;
    newNode->prev = current;
    current->next = newNode;
    current = head;

    while(current!=nullptr) {
        std::cout << current->rollno << ",";
        current = current->next;

    }
    

    return 0;
}