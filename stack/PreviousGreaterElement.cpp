// we nee to find the previous greater element for each element in the array and if there is no previous greater element then print -1
//  according to their nearest position.when sorted in assending order then the previous greater element is always -1
// if sorted in decending order then the previous greater element is always the next element
// 13,15,12,14,16,8,6,4,10,30

#include<iostream>
#include<stack>
using namespace std;

int main(){
    int arr[]={13,15,12,14,16,8,6,4,10,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    stack<int> s;

    s.push(arr[0]);

    for(int i=0;i<n;i++){
        while(!s.empty() && s.top()<=arr[i]){
            s.pop();
        }
        int pge=s.empty()?-1:s.top();
        cout<<pge<<" ";
        s.push(arr[i]);
    }
    

    return 0;
}