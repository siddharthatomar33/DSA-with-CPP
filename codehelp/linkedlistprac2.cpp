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

int main(){
    //stack
    //node first;
    //dynamic memory
    node* first=new node(10);
    return 0;
}