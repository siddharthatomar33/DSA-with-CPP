#include<iostream>
#include<stack>
using namespace std;

class stack{
    public:
    int* arr;
    int size;
    int top;

    stack(int capacity){
        arr=new int[capacity];
        size=capacity;
        top=-1;
    }
    void push(int val){
        if(top==size-1){
            //stack is already full
            cout<<"stack overflow"<<endl;
        }
        else{
            //normal condition
            top++;
            arr[top]=val;
        }
    }
    

};

//function tp print stack elements
void printstack(stack<int>s)
{
    cout<<"printing stack:"<<endl;
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}

int main(){
    //creation 
    stack<int>s;

    //insertion
    s.push(10);
    s.push(20);
    s.push(30);

    printstack(s);
    return 0;
}
