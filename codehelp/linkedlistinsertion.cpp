#include<iostream>
using namespace std;
//_________________________creating a node________________________
class node{
    public:
    int data;
    node* next;

    //constructor
    node(int value){
        this->data=value;
        this->next=NULL;
    }
};

node* insertathead(int value){
if(head==NULL && tail==NULL){
    //creation of new node
    node* newnode= new node(value);
    head=new node;
    tail=new node;
}
else{
    //LL is not empty
    //pehele se node present hai
    //insert at head
    //strp1: create node
    node* newnode=new node(value);
    //step2- connect this newnode to head node from next
    new node->next=head;
    //step 3- head update krdo
    head=newnode;
}
}


int main(){
    //stack
    //node first;
    //dynamic memory
    node* first=new node(10);
    return 0;
}