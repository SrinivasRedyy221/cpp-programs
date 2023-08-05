#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next; 
    Node(int x){
        data = x;
        next = NULL;
    }
};
class Stack{
    private:
    Node *head;
    int s=0;
    public:
    Stack(){
        head = NULL;
        
    }
    void push(int x){
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        s++;
    }
    void pop(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
        s--;
    }
    int peek(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return head->data;
    }
    bool isEmpty(){
        return head==NULL;
    }
    int size(){
        return s;
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.size()<<endl;
    return 0;
}