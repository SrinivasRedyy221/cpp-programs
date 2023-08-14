/*Implementation of stock span problem using this stl stack 
where the stock span is nothing but the count of the consecutive days including the present day wehre the stock price is lesser or equal to
13,15,12,14,16,8,6,4,10,30
1, 2, 1, 2, 5, 1 ,1,1, 4,10
when the array is sorted in the reverse order then the span is always 1*/

#include<iostream>
#include<stack>
using namespace std;

void stockspan(int arr[],int n){
    stack<int> s;
    int span[n];
    s.push(0);
    span[0]=1;
    for(int i=1;i<n;i++){
        while(!s.empty() && arr[s.top()]<=arr[i]){
            s.pop();
        }
        span[i]=s.empty()?i+1:i-s.top();
        s.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<span[i]<<" ";
    }
}

int main(){
    int arr[]={13,15,12,14,16,8,6,4,10,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    stockspan(arr,n);
    

    return 0;
}