#include <iostream>

struct ListNode {
    int data;
    ListNode* next;

    ListNode(int val) : data(val), next(nullptr) {}
};

ListNode* reverseList(ListNode* head) {
    if (!head || !head->next) {
        return head; 
    }

    ListNode* newHead = reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;

    return newHead;
}

void append(ListNode*& head, int val) {
    ListNode* newNode = new ListNode(val);
    if (!head) {
        head = newNode;
    } else {
        ListNode* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void printList(ListNode* head) {
    while (head) {
        std::cout << head->data << " -> ";
        head = head->next;
    }
    std::cout << "nullptr" << std::endl;
}

int main() {
    ListNode* head = nullptr;
    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 4);
    
    std::cout << "Исходный список: ";
    printList(head);
    
    head = reverseList(head);
    
    std::cout << "Развернутый список: ";
    printList(head);
    
    return 0;
}
