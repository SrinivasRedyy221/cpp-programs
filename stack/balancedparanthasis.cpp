#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<char> s;
    string str;
    cout<<"Enter the string of brackets which could be () or [] or {}"<<endl;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]=='('||str[i]=='['||str[i]=='{'){
            s.push(str[i]);
        }else if(str[i]==')'){
            if(s.top()=='('){
                s.pop();
            }else{
                cout<<"Not balanced"<<endl;
                return 0;
            }
        }else if(str[i]==']'){
            if(s.top()=='['){
                s.pop();
            }else{
                cout<<"Not balanced"<<endl;
                return 0;
            }
        }else if(str[i]=='}'){
            if(s.top()=='{'){
                s.pop();
            }else{
                cout<<"Not balanced"<<endl;
                return 0;
            }
        }
    }
    if(str.length()%2!=0){
        cout<<"Not balanced"<<endl;
        return 0;
    }else if(s.size()==0){
        cout<<"Balanced"<<endl;
        return 0;
    }
    return 0;
}