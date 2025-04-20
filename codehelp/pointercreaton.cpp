#include<iostream>
using namespace std;
int main(){
    int a=10;
    cout<<a<<endl;
    cout<<&a<<endl;
    //pointer creation
    int* ptr=&a;
    //accessing value stored at address stored in ptr
    cout<<*  ptr<<endl;
    return 0;
}
