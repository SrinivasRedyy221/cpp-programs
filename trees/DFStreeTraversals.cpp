/*
   left sub tree -> root -> right sub tree
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

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    cout<<"Preorder traversal"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Postorder traversal"<<endl;
    postorder(root);
    cout<<endl;
    cout<<"Inorder traversal"<<endl;
    inorder(root);
    cout<<endl;
    return 0;
}