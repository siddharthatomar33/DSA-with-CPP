//palindrone(when no, is reversed we get the same no.)
#include<iostream>
using namespace std;

int main()
{
    int m,n,r,rev=0;
    cout<<"enter no.";
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(rev==m)
     cout<<"its a palindrone";
     else
     cout<<"its not";
    
 return 0; 

}