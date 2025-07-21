#include<iostream>
#include<stack>
using namespace std;

class mystack{
    public:
    int* arr;
    int size;
    int top;

    mystack(int capacity){
        arr=new int[capacity];
        size=capacity;
        top=-1;
    }

    void push(int val){
        if(top==size-1){
            //stack is already full...
            cout<<"stack overflow"<<endl;
        }
        else{
            //normal condition
            top++;
            arr[top]=val;
        }
    }
    void pop(){
        //stack is empty,cannot pop inthis case
        if(top=-1){
            cout<<"stack underflow"<<endl;
        }else{
            //normal case
            arr[top]=-1;
            top--;
        }
    }

    int getsize(){
    return top+1;
    }

    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    
    int gettop(){
        if(top==-1){
            cout<<"there is no element on top"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }

    //function tp print stack elements
    void print(){
        cout<<"printing stack:"<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<endl;
        }
        cout<<endl;
    }
};


int main(){
    mystack s(5);
    s.print();
    s.push(10);
    s.print();
    s.push(20);
    s.print();
    s.push(30);
    s.print();
    s.push(40);
    s.print();
    s.push(50);
    s.print();

    return 0;
}
