// Perfect number
#include<iostream>
using namespace std;

int main()
{
   int n,i,sum=0;
   cout<<"enter no.";
   cin>>n;

   for(i=1;i<=n;i++) 
   {
      if(n%i==0)
        {
         sum=sum+i;
        }
   }
      if(2*n==sum) 
         cout<<"perfect no.";
         else
         cout<<"not a perfect no.";
        
    return 0;
}