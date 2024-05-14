#include <iostream>
#include "binaryTree.hpp"
#include<stack>
#include<queue>
#include<string>


void binaryTree::destroy(Node* leaf) {
    if (leaf != nullptr) {
        destroy(leaf->left);
        destroy(leaf->right);
        delete leaf;
    }
}

void binaryTree::print() {
    std::stack<Node*> stack;
    Node* current = root;
    if(current == nullptr) {
        std::cout << "Tree is empty" << std::endl;
        return;
    }
    else{
        
        stack.push(current);
        while (!stack.empty()){
            current = stack.top();
            stack.pop();
            std::cout << current->data << " ";
            

            if(current->right != nullptr) {
                stack.push(current->right);
            }
            if(current->left != nullptr) {
                stack.push(current->left);
            }       
        }   
    }  
}

void binaryTree::insert(int data) {
    Node* newNode = new Node(data);
    if (root == nullptr) {
        root = newNode;
        return;
    }
    std::queue<Node*> queue;
    queue.push(root);
    while (!queue.empty()) {
        Node* current = queue.front();
        queue.pop();
        if (current->left == nullptr) {
            current->left = newNode;
            return;
        }
        else {
            queue.push(current->left);
        }
        if (current->right == nullptr) {
            current->right = newNode;
            return;
        }
        else {
            queue.push(current->right);
        }
    }
}


int main(){
    binaryTree tree;
    tree.insert(1);
    tree.insert(2);
    tree.insert(3);
    tree.insert(4);
    tree.insert(5);
    tree.insert(6);



    tree.print();
}

      
