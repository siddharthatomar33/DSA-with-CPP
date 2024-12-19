#include<iostream>
using namespace std;

int main(){
   int n,i,count=0;
   cout<<"enter no.";
   cin>>n;
   for(i=1;i<=10;i++)
   {
    if(n%i==0)
    {
        count++;
    }
   }
   if(count==2)
      cout<<"its a prime";
   else
      cout<<"not a prime no."; 

}