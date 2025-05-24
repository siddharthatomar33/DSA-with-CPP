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
    node* newnode= new node(value);
    head=new node;
    tail=new node;
}
else{
    node* newnode=new node(value);
    new node->next=head;
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