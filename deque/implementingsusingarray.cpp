#include<iostream>
using namespace std;

class Deque{
    private:
        int *arr;
        int front;
        int rear;
        int size;
    public:
        Deque(int size){
            arr=new int[size];
            front=-1;
            rear=-1;
            this->size=size;
        }
        void insertFront(int x){
            if(isFull()){
                cout<<"Deque is full"<<endl;
                return;
            }
            if(isEmpty()){
                front=0;
                rear=0;
            }
            else if(front==0){
                front=size-1;
            }
            else{
                front--;
            }
            arr[front]=x;
        }
        void insertRear(int x){
            if(isFull()){
                cout<<"Deque is full"<<endl;
                return;
            }
            if(isEmpty()){
                front=0;
                rear=0;
            }
            else if(rear==size-1){
                rear=0;
            }
            else{
                rear++;
            }
            arr[rear]=x;

        }
        void deleteFront(){
            if(isEmpty()){
                cout<<"Deque is empty"<<endl;
                return;
            }
            if(front==rear){
                front=-1;
                rear=-1;
            }
            else if(front==size-1){
                front=0;
            }
            else{
                front++;
            }

        }
        void deleteRear(){
            if(isEmpty()){
                cout<<"Deque is empty"<<endl;
                return;
            }
            if(front==rear){
                front=-1;
                rear=-1;
            }
            else if(rear==0){
                rear=size-1;
            }
            else{
                rear--;
            }
        }
        bool isEmpty(){
            return front==-1;
        }
        bool isFull(){
            return (front==0 && rear==size-1) || front==rear+1;
        }
        int getFront(){
            if(isEmpty()){
                cout<<"Deque is empty"<<endl;
                return -1;
            }
            return arr[front];
        }
        int getRear(){
            if(isEmpty() || rear<0){
                cout<<"Deque is empty"<<endl;
                return -1;
            }
            return arr[rear];
        }
        void display(){
            if(isEmpty()){
                cout<<"Deque is empty"<<endl;
                return;
            }
            if(front<=rear){
                for(int i=front;i<=rear;i++){
                    cout<<arr[i]<<" ";
                }
            }
            else{
                for(int i=front;i<size;i++){
                    cout<<arr[i]<<" ";
                }
                for(int i=0;i<=rear;i++){
                    cout<<arr[i]<<" ";
                }
            }
            cout<<endl;
        }
};

int main(){
    Deque dq(5);
    dq.insertFront(10);
    dq.insertFront(20);
    dq.insertRear(30);
    dq.insertRear(40);
    dq.insertFront(50);
    dq.display();
    dq.deleteFront();
    dq.deleteRear();
    dq.display();
    dq.insertFront(60);
    dq.insertRear(70);
    dq.display();
    return 0;
}