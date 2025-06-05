#include<iostream>
#include<queue>
using namespace std;

class deque{
    private:
    int* arr;
    int size;
    int front;
    int rear;

    public:
           deque(int size){
            arr=new int[size];
            front=-1;
            rear=-1;
           }

    void pushfront(int val){
       
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
        arr[front]
       }
    }
    void popback(){

    }

};

int main(){
    //creation
    deque<int>dq;

    //insertion
    dq.push_front(10);
    dq.push_front(30);
    dq.push_front(50);
    dq.push_back(70);

    //removal
    dq.pop_front();
    cout<<dq.front()<<endl;
    dq.pop_back();
    cout<<dq.back()<<endl;


    return 0;
}