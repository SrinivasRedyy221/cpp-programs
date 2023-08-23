#include <iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the key to be searched: ";
    cin>>key;
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            cout<<"Key found at index "<<mid<<endl;
            return 0;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<"Key not found"<<endl;
    return 0;
}