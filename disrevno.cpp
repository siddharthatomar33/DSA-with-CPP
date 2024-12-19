//display reversing a no.
#include<iostream>
using namespace std;

int main()
{
    int r,n;
    cout<<"enter the no.";
    cin>>n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        cout<<r;
    }
return 0;
}