#include <iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=0;
    temp=a;
    a=b;
    b=temp;
}
void selectionsort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
        
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"sorted array using selection sort"<<endl;
    selectionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}