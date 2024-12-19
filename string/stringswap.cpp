#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1="programming";
    string str2="language";
    
    str1.swap(str2);

    cout<<str1<<endl;
    cout<<str2<<endl;
    
    return 0;
}