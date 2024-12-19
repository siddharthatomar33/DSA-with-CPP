//binary search
#include<iostream>
using namespace std;

int main()
{
    int A[10]={6,8,13,17,20,22,25,28,30,35};
    int l=0,h=9,k,mid;
    
    cout<<"enter key";
    cin>>k;
    while(l<=h)
    {
      mid=(l+h)/2;
      if(k==A[mid])
      {
        cout<<"found at"<<mid;
        return 0;
      }
      else if(k<A[mid])
      {
         h=mid-1;
      }
      else 
      {
         l=mid+1;
      }
    }  
    cout<<"not found"<<endl;
    return 0;
}