//armstrong no.(the cubes of the no.s give same entered no.)
#include<iostream>
using namespace std;

int main(){
    int n,r,sum=0,m;
    cout<<"enter the no.";
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }
    if(sum==m)
     cout<<"its a armstrong no:- "<<sum;
    else
     cout<<"its not";
    return 0;
}