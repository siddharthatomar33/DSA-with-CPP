#include<iostream>
#include<queue>
using namespace std;

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