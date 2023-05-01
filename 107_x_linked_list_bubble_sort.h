//this is a answer to the exercise in linked list
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
 

node* bubble_sort_LinkedList_itr(node* head)
{
    // your code goes here
    for(node * it = head; it!=NULL; it=it->next){
        for(node *jt =head; jt->next!=NULL;jt=jt->next){
            if(jt->data > jt->next->data){
                int temp = jt->next->data;
                jt->next->data = jt->data;
                jt->data = temp;
            }
        }
    }
   return head; 
}
 
