#include <iostream>
#include "linkedList.hpp"

linkedList::linkedList(){
    head = NULL;
}

linkedList::~linkedList(){
    node* current = head;
    node* next;
    while(current != NULL){
        next = current->next;
        delete current;
        current = next;
    }
}

void linkedList::insert(int data){
    node* newNode = new node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void linkedList::remove(int data){
    node* current = head;
    node* previous = NULL;
    while(current != NULL){
        if(current->data == data){
            if(previous == NULL){
                head = current->next;
            } else {
                previous->next = current->next;
            }
            delete current;
            return;
        }
        previous = current;
        current = current->next;
    }
}

void linkedList::print(){
    node* current = head;
    while(current != NULL){
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int linkedList::getSize(){
    int count = 0;
    node* current = head;
    while(current != NULL){
        count++;
        current = current->next;
    }
    return count;
}

int main(){
    linkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);
    list.print();
    list.remove(3);
    list.print();
    std::cout << "Size: " << list.getSize() << std::endl;
    return 0;
}