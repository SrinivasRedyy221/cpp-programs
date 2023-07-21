#include <iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }

        }
    }

}
int main(){
    int n;
    cout<<"Enter size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubblesort(arr,n);
    cout<<"after bubble sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}