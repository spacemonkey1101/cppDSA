#include<bits/stdc++.h>
using namespace std;

bool duplicateParentheses(string str){
    int size = str.size();
    stack<char> s;
    for(int i = 0; i < size; i++){
        if(str[i] == ')' && !s.empty() && s.top() == '('){
            return true;
        }
        
        if(str[i] == ')'){
            while(!s.empty()){
                if(s.top() == '('){
                    s.pop();
                    break;
                }
                s.pop();
            }
        } else{
            s.push(str[i]);
        }
    }
    return false;
}

int main(){
    string str = "((a+b)+((c+d)))";
    cout<<duplicateParentheses(str);
}