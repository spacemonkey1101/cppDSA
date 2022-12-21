#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    string s = "hello world"; // this is dynamic
    cout << s << endl;

    cout << "Enter the sentence to store " << endl;
    // this is a new thing!!!
    getline(cin, s);
    cout << "The string entered is :" << s << endl;

    //iterate over string
    for(char ch : s){
        cout<<ch<<",";
    }
}