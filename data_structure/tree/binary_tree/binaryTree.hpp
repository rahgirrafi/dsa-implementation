#ifndef BINARYTREE_HPP
#define BINARYTREE_HPP

class Node {
    public:
        int data;
        Node* left; 
        Node* right;

        Node(int data) {
            this->data = data;
            this->left = nullptr;
            this->right = nullptr;
        }


};

class binaryTree {
    public:
        Node* root = nullptr;
        void insert(int data);
        void destroy(Node* leaf);
        void print();

};

#endif