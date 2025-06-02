
#include<iostream>
using namespace std;
//_________________________creating a node________________________
class node{
    public:
    int data;
    node* next;
    node* prev;

    //constructor
    node(int value){
        this->data=value;
        this->next=NULL;
        this->prev=NULL;
    }
};
//insert at head
node* insertathead(int value,node* &head,node* &tail){
if(head==NULL && tail==NULL){
    //2case-> //empty/not empty

    //creation of new node
    node* newnode= new node(value);
    //uski node ko head maan lia
    head=newnode;
    //ussi node ko tail maan lia
    tail=newnode;
}
else{
    //empty nhi h
    //strp1: create node
    node* newnode=new node(value);
    //step2- connect newnode ka next to head
    newnode->next=head;
    //step 3: connect head ka prev with newnode
    head->prev=newnode;
    //step 4- head update krdo
    head=newnode;

}
return head; //return updated node
}
//inside
node* insertattail(int value,node* &head,node* &tail){
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

    //step1: create new node
    node* newnode=new node(value);
    //step2:
    tail->next=newnode;
    //step 3:
    newnode->prev=tail;
    //step 4: update tail
    tail=newnode;
}
return head; //return updated mode
}

//PRINTINGing
void print(node* head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";//print data inside node
        temp=temp->next;//iteration
    }
    cout<<"NULL"<<endl;
}

//LENGTH OF THE LINKED LIST
int getlength(node* head){ 
    int len=0;
    node* temp=head;

    while(temp!=NULL){
        temp=temp->next;  //iterate in nodes
        len++;
    }
    return len;
}

void insertatposition(int position,int value,node* head,node* tail){

    int length=getlength(head);//length is reqiued below

    if(position==1){
        //insert at head krna chahta hu
        insertathead(value,head,tail);
    }
    else if(position==length+1){
        //insert at tail
        insertattail(value,head,tail);
    }
    else{
        //step1
        node* temp=head;
        //step2
        for(int i=0;i<position-2;i++){
            temp=temp->next;
        }
        //step3
        node* newnode=new node(value);
        //step4
        node* forward=temp->next;
        //step5
        temp->next=newnode;
        newnode->prev=temp;
        newnode->next=forward;
        forward->prev=newnode;
    }
}

//SERACHING IN LL
int searchll(int target,node* head){
    node* temp=head;
    int position=0;
 
    while(temp!=NULL){
        if(temp->data == target){
            return position;
        }
        temp=temp->next;
        position++;
    }
    return -1;
}

int main(){
    
    node* head=NULL;
    node* tail=NULL;
    //linklist empty

    //insert node at the head
    insertathead(10,head,tail);
    print(head);
    insertathead(20,head,tail);
    print(head);
    insertathead(30,head,tail);
    print(head);
    insertattail(50,head,tail);
    print(head);
    insertatposition(3,100,head,tail);
    print(head);

    // insertatposition(2,50,head,tail);
    // print(head);
     cout<<searchll(20,head);

 
    return 0;
    //stack
    //node first;
    //dynamic memory
    //node* first=new node(10);
}