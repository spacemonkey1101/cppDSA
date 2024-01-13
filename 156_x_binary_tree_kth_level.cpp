#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int key;
    Node* left, *right;
};

vector<int> printKthLevel(Node* root, int k){
    // your code goes here
    queue< struct Node *> q;
    q.push(root);
    
    struct Node* marker = new struct Node;
    marker->key = 1001;
    marker->left = NULL;
    marker->right = NULL;
    
    
    q.push(marker);
    int level = 0;
    
    vector<int> res;
    
    
    while(!q.empty()){
        struct Node* t = q.front();
        q.pop();
        
        if(t!=NULL && t->key == 1001){
            if(level == k){
                return res;
            }
            res.clear();
            level++;
            if(!q.empty()){
                q.push(t);
            }
        }else if(t != NULL){
            res.push_back(t->key);
            if(t->left){
                q.push(t->left);
            }
            if(t->right){
                q.push(t->right);
            }
        }
    }
   return res;
}
