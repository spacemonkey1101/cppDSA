//this is a answer to the exercise in linked list
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

node* deleteTail(node * head){
    //Complete this function 
    node * t = head;
    if(t->next == NULL){
        delete t;
        head = NULL;
        return head;
    }
    while(t->next->next != NULL){
        t = t->next;
    }
    node * tail = t->next;
    t->next = NULL;
    tail->next = NULL;
    delete tail;
    return head;
}

