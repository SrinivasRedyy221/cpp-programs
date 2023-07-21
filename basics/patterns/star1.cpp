#include <iostream>
using namespace std;
int main() {
    int start=4;
    int end=4;
    for(int i=0;i<5;i++){
        cout<<endl;
        for(int j=0;j<9;j++){
        if((j>=start)&&(j<=end)){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
        }
        start--;
        end++;  
    }
    return 0;

}