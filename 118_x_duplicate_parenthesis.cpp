#include<bits/stdc++.h>
using namespace std;

bool duplicateParentheses(string str){
    int size = str.size();
    stack<char> s;
    for(int i = 0; i < size; i++){
        if(str[i] == ')' && !s.empty() && s.top() == '('){
            return true;
        }
        else if(str[i] == ')'){
            while(!s.empty()){
                if(s.top() == '('){
                    s.pop();
                    break;
                }
                s.pop();
            }
        } 
        else if(str[i] == '+' || str[i] == '-' || str[i] == '*' || 
        str[i] == '/' || str[i] == '(' ){
            s.push(str[i]);
        }
    }
    return false;
}

int main(){
    string str = "(c)";
    cout<<duplicateParentheses(str);
}