#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
    Node(int data){
        value=data;
        next=nullptr;
    }
};
class Linkedlist{
    private:
    Node* head;
    public:
    Linkedlist(){
        head=nullptr;
    }
    void append(int data){
        Node* newnode=new Node(data);
        newnode->value=data;
        newnode->next=nullptr;
        if(head==nullptr){
            head=newnode;
        }
        else{
            Node* temp=head;
            while(temp->next!=nullptr){
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }
    void display(){
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->value<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void delete1(int data){
        if(head==nullptr){
            return;
        }
        if(head->value=data){
            Node* temp=head;
            head=head->next;
            delete temp;
            return;
        }

        Node* temp=head;
        while(temp->next->value!=data&&temp->next!=nullptr){
            temp=temp->next;
        }
        if (temp->next != nullptr) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        }
        
    }
};
int main(){
    Linkedlist list;
    list.append(10);
    list.append(20);
    list.append(30);
    list.delete1(10);
    list.display();
    return 0;
}