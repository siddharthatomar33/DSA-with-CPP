//factorial of a no.
#include<iostream>
using namespace std;

int main(){
    int n,i,fact=1;
    cout<<"enter no.";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"factorial of "<<n<< "is"<<fact;
    return 0;

}