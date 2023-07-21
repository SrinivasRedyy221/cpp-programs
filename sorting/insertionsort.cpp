#include <iostream>
using namespace std;
void insertionsort(int arr[],int size){
    for(int i = 1;i<size;i++){
        for(int j=i;j>=0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements to enter in the array"<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    insertionsort(arr,n);
    cout<<"Sorted array using insertion sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}