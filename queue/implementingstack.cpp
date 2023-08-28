#include<iostream>
#include<queue>
using namespace std;

class Stack{
    private:
        queue<int> q1;
        queue<int> q2;
    public:
        void push(int x){
            q1.push(x);
        }
        int pop(){
            if(q1.empty()){
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            while(q1.size()!=1){
                q2.push(q1.front());
                q1.pop();
            }
            int x=q1.front();
            q1.pop();
            queue<int> temp=q1;
            q1=q2;
            q2=temp;
            return x;
        }
        int top(){
            if(q1.empty()){
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            while(q1.size()!=1){
                q2.push(q1.front());
                q1.pop();
            }
            int x=q1.front();
            q1.pop();
            q2.push(x);
            queue<int> temp=q1;
            q1=q2;
            q2=temp;
            return x;
        }
        bool empty(){
            return q1.empty();
        }
};


int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.empty()<<endl;
    

    return 0;
}