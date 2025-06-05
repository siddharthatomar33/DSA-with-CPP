#include<iostream>
#include<queue>
using namespace std;

class Deque{
    private:
    int* arr;
    int size;
    int front;
    int rear;

    public:
           Deque(int size){
            arr=new int[size];
            front=-1;
            rear=-1;
           }

    void pushfront(int val){
       if(front==0){
        //means we dont have space in left of the queue
        cout<<"overflow"<<endl;
       }
       else if(front==-1 && rear==-1){
        //empty
        front++;
        rear++;
        arr[front]=val;
       }
       else{
        //normal case
        front--;
        arr[front]=val;
       }
    }
    void pushback(int val){
        //3 cases
        if(rear=size-1){    //full 
          cout<<"overflow"<<endl;
        }
        else if(front==-1 && rear==-1){//queue empty
         rear++;
         front++;
         arr[rear]=val;
        }
        else{
            //normal case
            rear++;
            arr[rear]=val;
        }
    }
    void popfront(){
       //3cases
       if(front==-1 && rear==-1){//empty
        cout<<"underflow"<<endl;
       }
       else if(front==rear){//single element
        arr[front]=-1;
        front=-1;
        rear=-1;
       }
       else{
        //normal flow
        arr[front]=-1;
        front++;
       }
    }
    void popback(){
       if(front==-1 && rear=-1){ //empty ,no element to pop
        cout<<"underflow"<<endl;
       }
       else if(front==rear){
        //single element
        arr[rear]=-1;
        front--;
        rear--;
       }
       else{
        //normal case
        arr[rear]=-1;
        rear--;
       }
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main(){
    Deque dq(5);
    
    dq.pushfront(10);
    dq.print();
    dq.pushfront(20);
    dq.print();
    dq.pushback(15);
    dq.print();
    dq.pushback(35);
    dq.print();
    dq.pushfront(100);
    dq.print();
    dq.popback();
    dq.print();
    dq.popback();
    dq.print();

    //insertion
    // dq.push_front(10);
    // dq.push_front(30);
    // dq.push_front(50);
    // dq.push_back(70);

    // //removal
    // dq.pop_front();
    // cout<<dq.front()<<endl;
    // dq.pop_back();
    // cout<<dq.back()<<endl;
    return 0;
}