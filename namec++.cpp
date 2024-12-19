//printing full name in c++
#include<iostream>

using namespace std;

int main()
{
    string str;
    
    cout<<"may i know your name"<<endl;
    getline(cin,str);
    
    cout<<"hello "<<str;
    return 0;
}