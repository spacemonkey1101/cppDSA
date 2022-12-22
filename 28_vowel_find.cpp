#include<iostream>
#include<cstring>

using namespace std;

string vowel(string S){
    // your code goes here
    string res;
    
    for(char x : S)
    {
        if(x == 'a' || x =='e' || x=='i' || x=='o' || x=='u'){
                    res+=x;

        }
    }
    return res;
} 

int main(){
    cout<<vowel("babaaeiouaeiouyaga");
}