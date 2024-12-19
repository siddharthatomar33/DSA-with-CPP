#include<iostream>
using namespace std;

 int main()
 {
    int A[9]={1,5,3,4,7,9,6,5,2};
    int max=A[0];
    for(auto i=0;i<9;i++)
    {
      if(A[i]>max)
      {
        max=A[i];
      }
    }
    cout<<"largest no. is "<<max;
 }