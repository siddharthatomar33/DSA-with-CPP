#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="welcome";
    string::iterator it;
    int count=0;

    for(it=str.begin();it!=str.end();it++)
    {
        count++;
    }
    cout<<count<<endl;
    return 0;
}