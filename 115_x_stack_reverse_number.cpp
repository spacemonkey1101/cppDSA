/* This is a solution to the exercise in https://www.udemy.com/course/cpp-data-structures-algorithms-prateek-narang/learn/quiz/5265234#overview */

#include <bits/stdc++.h>
using namespace std;

int reverse(int n){
        stack<int> s1;
        int temp=n,sum=0;
        while(temp>0){
            s1.push(temp%10);
            temp=temp/10; 
        }
        int d = 0, i =1;
        while(!s1.empty()){
            int t = s1.top();
            s1.pop();
            sum = sum + t*i;
            i=i*10;
        }
        return sum;	
}