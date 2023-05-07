#include<iostream>
#include<stack>

using namespace std;

// Brute Force - O(n^2)
// vector<int> nextGreaterElement(vector<int> v){
//     vector<int> res;
    
//     for (int i = 0; i<v.size(); i++){
//         bool flag = false;
//         for(int j =i+1 ; j < v.size(); j++){
//             if(v[j] > v[i]){
//                 res.push_back(v[j]);
//                 flag = true;
//                 break;
//             }
//         }
//         if(!flag)
//             res.push_back(-1);
//     }
//     return res;
// }/

//Optimize with Stack
