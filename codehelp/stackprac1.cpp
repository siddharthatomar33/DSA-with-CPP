#include<iostream>
#include<stack>
using namespace std;


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
