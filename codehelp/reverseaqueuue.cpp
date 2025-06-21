#include<iostream>
#include<queue>
#include<stack>
using namespace std;

//lets put elements of queue on stacks 
void reservequeue(queue<int> &q){
    stack<int>st;
    while(!q.empty()){
    int element=q.front();
    q.pop();
    }
}
//stcke ke element reverse hogye
//enter reversed elements in queue 
while(!st.empty()){
    int element=st.top();
    st.pop();
    
    q.push(element);
}
//main part........
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    reservequeue(q);
    
    //print all element inside
    while(!q.empty()){
        cout<<q.front<<" ";
        q.pop();
    }
    return 0;

}