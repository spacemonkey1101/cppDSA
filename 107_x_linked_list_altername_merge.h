//this is a answer to the exercise in linked list
// link - https://www.udemy.com/course/cpp-data-structures-algorithms-prateek-narang/learn/quiz/5293152#overview

#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;

	node(int data){
		this->data = data;
		next = NULL;
	}
};

node* alternateMerge(node * root1, node* root2){
    //Complete this function 
    node * it1 = root1;
    node * it2 = root2;
    
    while(it2!=NULL){
        node * n = new node(it2->data);
        n->next = it1->next;
        it1->next = n;
        if(it1->next->next != NULL)
            it1=it1->next->next;
        
        it2=it2->next;

    }
    return root1;
}

