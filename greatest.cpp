//max of 3no.
#include<iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter 3 no.";
    cin>>a>>b>>c;
    
    if(a>b && a>c)
    {
     cout<<a;
    }
    else if(b>c)
    {
    cout<<b;
    }
    else
    cout<<c;

    return 0;
}