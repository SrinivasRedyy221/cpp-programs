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

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    return 1+max(height(root->left),height(root->right));
}

int diameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=height(root->left);
    int rheight=height(root->right);
    int ldiameter=diameter(root->left);
    int rdiameter=diameter(root->right);
    return max(lheight+rheight+1,max(ldiameter,rdiameter));
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->right->right=new Node(6);
    root->right->left=new Node(5);
    root->right->left->left=new Node(7);
    root->right->left->right=new Node(8);
    root->right->right->right=new Node(9);
    root->right->right->right->left=new Node(10);
    root->right->right->right->right=new Node(11);
    root->right->right->right->right->left=new Node(12);
    root->right->right->right->right->right=new Node(13);
    root->right->right->right->right->right->left=new Node(14);
    root->right->right->right->right->right->right=new Node(15);
    cout<<"Longest diameter of the tree is:"<<endl;
    cout<<diameter(root)<<endl;
    return 0;
}