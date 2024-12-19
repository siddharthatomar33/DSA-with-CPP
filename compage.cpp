#include<iostream>

using namespace std;
int main(){
    int age;
    cout<<"enter your age";
    cin>>age;
    if(age>=18 || age<=50)
    {
        cout<<"eligible";
    }
    /*else
    {
        cout<<"not Eligible";
    }*/ 
    return 0;
}