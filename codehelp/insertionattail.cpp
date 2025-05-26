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

node* insertathead(int value,node* &head,node* &tail){
if(head==NULL && tail==NULL){
    //creation of new node
    node* newnode= new node(value);
    //uski node ko head maan lia
    head=newnode;
    //ussi node ko tail maan lia
    tail=newnode;
}
else{
    //LL is not empty
    //pehele se node present hai
    //insert at head

    //strp1: create new node
    node* newnode=new node(value);
    //step2- connect this newnode to tail node.
    tail->next=newnode;
    //step 3- tail update krdo
    tail=newnode;

}
return head; //return updated mode
}
void print(node* head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";//print data inside node
        temp=temp->next;//iterating like i++
    }
    cout<<endl;
}

int main(){
    
    node* head=NULL;
    node* tail=NULL;
    //linklist empty
    //insert node at the head
    head=insertathead(10,head,tail);
    print(head);
    head=insertathead(20,head,tail);
    print(head);
    head=insertathead(30,head,tail);
    print(head);
    
    return 0;
    //stack
    //node first;
    //dynamic memory
    //node* first=new node(10);
}