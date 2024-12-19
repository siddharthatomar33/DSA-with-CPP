//reversing a no.
#include<iostream>
using namespace std;

int main(){
    int n,r,rev;
    cout<<"enter a no.";
    cin>>n;
    
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    cout<<"rev of the no. is"<<rev;
return 0;    
}