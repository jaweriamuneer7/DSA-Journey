// DSA LAB 6 Task 2     section 3C-EVEINING
// Jaweria Muhammad Muneer   CSC-25F-601
#include<iostream>

struct Node {
    int rollno;
    Node* next;
    Node* prev;
};

int main() {
    Node* head = new Node{602, nullptr, nullptr};
    Node* second = new Node{603, nullptr, nullptr};
    Node* third = new Node{604, nullptr, nullptr};
    Node* fourth = new Node{605, nullptr, nullptr};

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;

    
    Node* newNode = new Node{601, nullptr, nullptr};
    newNode->next = head;
    head->prev = newNode;
    Node* current = newNode;
    while(current!=nullptr) {
        std::cout << current->rollno << ",";
        current = current->next;

    }
    current = third->next;
    std::cout << std::endl;
    while(current!=nullptr) {
        std::cout << current->rollno << ",";
        current = current->prev;
    }


    return 0;
}