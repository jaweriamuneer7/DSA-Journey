// DSA LAB 6 Task 5    section 3C-EVEINING
// Jaweria Muhammad Muneer   CSC-25F-601
#include<iostream>

struct Node {
    int data;
    Node* next;
};

int main() {

    Node* head = new Node{10, nullptr};
    Node* second = new Node{20, nullptr};
    Node* third = new Node{30, nullptr};

    head->next = second;
    second->next = third;

    if(head == nullptr) {
        std::cout << "List is empty!";
    }
    else {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    if(head == nullptr) {
        std::cout << "List is empty!";
    }
    else {
        Node* current = head;

        while(current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
    }

    return 0;
}