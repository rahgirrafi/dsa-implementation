#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

class linkedList {
    private:
        struct node {
            int data;
            node* next;
        };
        node* head;
        node* tail;
        int size;
    public:
        linkedList();
        ~linkedList();
        void insert(int data);
        void remove(int data);
        void print();
        int getSize();
};

#endif