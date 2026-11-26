// DSA LAB 6 Task 4     section 3C-EVEINING
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
    Node* fourth = new Node{40, nullptr};
    Node* fifth = new Node{50, nullptr};
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    int userIn;
    std::cout << "Enter value to search: ";
    std::cin >> userIn;

    Node* current = head;
    int position = 1;
    bool found = false;

    while(current != nullptr) {

        if(current->data == userIn) {
            found = true;
            break;
        }

        current = current->next;
        position++;
    }

    
    if(found) {
        std::cout << "Value found at position: " << position;
    }
    else {
        std::cout << "Value not found!";
    }

    return 0;
}
