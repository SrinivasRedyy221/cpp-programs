#include <iostream>
using namespace std;

class Queue{
    private:
        int front;
        int rear;
        int size;
        int *Q;
    public:
        Queue(int size){
            front=rear=-1;
            this->size=size;
            Q=new int[this->size];
        }
        void enqueue(int x){
            if(rear==size-1){
                cout<<"Queue is full"<<endl;
            }
            else{
                rear++;
                Q[rear]=x;
            }
        }
        void dequeue(){
            if(front==rear){
                cout<<"Queue is empty"<<endl;
                return ;
            }
            for(int i=front+1;i<=rear;i++){
                Q[i-1]=Q[i];

            }
            rear--;
            
        }
        void display(){
            for(int i=front+1;i<=rear;i++){
                cout<<Q[i]<<" ";
            }
            cout<<endl;
        }
};

int main(){
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();

    return 0;
}