// DSA LAB 6 Task 6    section 3C-EVEINING
// Jaweria Muhammad Muneer   CSC-25F-601

#include<iostream>

struct Node {
    std::string page;
    Node* next;
    Node* prev;
};

int main() {

    Node* head = new Node{"Home", nullptr, nullptr};
    Node* second = new Node{"Courses", nullptr, nullptr};
    Node* third = new Node{"Lab", nullptr, nullptr};
    Node* fourth = new Node{"Result", nullptr, nullptr};

    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    Node* current = head;

    std::cout << "Browser History Forward:" << std::endl;

    while(current != nullptr) {
        std::cout << current->page << " ";
        current = current->next;
    }

    std::cout << std::endl;

    current = fourth;

    std::cout << "Browser History Backward:" << std::endl;

    while(current != nullptr) {
        std::cout << current->page << " ";
        current = current->prev;
    }

    return 0;
}
