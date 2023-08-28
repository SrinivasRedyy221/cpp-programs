/*
when given 2 numbers 5 and 6 and n as 10
5,6,55,56,65,66,555,556,565,566
then can be done with 
           ""
          5                        6
     55       56               65       66
  555 556   565 566         665 666   655 656
*/
#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    queue<string> q;
    q.push("5");
    q.push("6");
    for(int i=0;i<n;i++){
        string curr=q.front();
        cout<<curr<<" ";
        q.pop();
        q.push(curr+"5");
        q.push(curr+"6");
    }
    cout<<endl;
    return 0;
}