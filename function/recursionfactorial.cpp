#include<iostream>
using namespace std;

int fact(int num)
{
    if(num==1 || num==0)
    {
        return 1;
    }
    else
    {
        return num*fact(num-1);
    }
}
int main()
{
    int num;
    cout<<"enter the no."<<endl;
    cin>>num;
    cout<<"the factorial is "<<fact(num);
    return 0;
}