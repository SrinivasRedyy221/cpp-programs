#include<iostream>
using namespace std;

class Stack {
    private:
        int *arr;
        int top;
        int cap;
    public:
        Stack(int size){
            arr = new int[size];
            cap = size;
            top = -1;
        }
        void push(int x){
            if(top==cap-1){
                cout<<"Stack is full"<<endl;
                return;
            }
            top++;
            arr[top] = x;
        }
        void pop(){
            if(top==-1){
                cout<<"Stack is empty"<<endl;
                return;
            }
            top--;

        }
        int peek(){
            if(top==-1){
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            return arr[top];
        }
        int size(){
            return top+1;
        }
        bool isEmpty(){
            return top==-1;
        }
        
};
int main(){
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}