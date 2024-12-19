//linear search-(not sorted list)
#include<iostream>
using namespace std;

int main()
{
    int A[6],n=6,key;
    cout<<"enter no.s";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"enter key";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key==A[i])
        {
            cout<<"found at "<<i<<endl;
            return 0;
        }
    }
    cout<<"not found";
    return 0;
}