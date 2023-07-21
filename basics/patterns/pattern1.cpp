#include <iostream>
using namespace std;

int main(){
    for(int i=1;i<=5;i++){
        cout<<endl;
        for(int j=5;j>=i;j--){
            cout<<i;
        }
    }
    return 0;
}