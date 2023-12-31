/*
   Binary Tree 
   1. Has at most two children
   every node has left pointer , value and right pointer
   every pointer is null or points to another node
   binary tree has binary search tree,binary head and segment tree

*/

#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int data){
            this->data=data;
            left=NULL;
            right=NULL;
        }
};

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    return 0;
}