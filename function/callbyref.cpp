#include<iostream>
using namespace std;

void swapReferenceVar(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=4, y=5;
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapReferenceVar(x,y);
    cout<<" the value of x "<<x<<" the value of y is "<<y<<endl;
    return 0;
}