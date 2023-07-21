#include <iostream>
using namespace std;
int partition(int arr[],int l,int h){
    int i=l-1;
    int j=h+1;
    int pivot=arr[l];
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i<=j){
            return j;
        }
        swap(arr[i],arr[j]);
    }
}
void quicksort(int arr[],int l,int h){
    if(l<h){
    int p=partition(arr,l,h);
    quicksort(arr,l,p);
    quicksort(arr,p+1,h);
    }
}
int main(){
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0,h=n;
    quicksort(arr,l,h);
    cout<<"after quick sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    

    return 0;
}