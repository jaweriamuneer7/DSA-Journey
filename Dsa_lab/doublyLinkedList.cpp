// DSA LAB 6 Task 1     section 3C-EVEINING
// Jaweria Muhammad Muneer   CSC-25F-601
#include<iostream>

struct Node {
    std::string song;
    Node* next;
    Node* prev;
};

int main() {
    Node* head = new Node{"all-iz-well", nullptr, nullptr};
    Node* second = new Node{"Hai jazba junoon", nullptr, nullptr};
    Node* third = new Node{"Baari", nullptr, nullptr};
    Node* fourth = new Node{"roar", nullptr, nullptr};

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;

    Node* current = head;
    while(current!=nullptr) {
        std::cout << current->song << ",";
        current = current->next;

    }
    current = third->next;
    std::cout << std::endl;
    while(current!=nullptr) {
        std::cout << current->song << ",";
        current = current->prev;
    }


    return 0;
}