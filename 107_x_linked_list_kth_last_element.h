//this is a answer to the exercise in linked list
// link - https://www.udemy.com/course/cpp-data-structures-algorithms-prateek-narang/learn/quiz/5245878#overview

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

int kthLastElement(node * head,int k){
    //Complete this function to return kth last element
    node * front = head;
    node * back = head;
    for(int  i = 0 ; i<k;i++){
        front=front->next;
    }
    while(front!=NULL){
        back=back->next;
        front=front->next;
    }
    return back->data;
}
