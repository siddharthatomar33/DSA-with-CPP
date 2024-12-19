//sum of elements inside arrays
#include<iostream>
using namespace std;

 int main()
 {
    int A[7]={4,8,6,9,5,3,7};
    int sum=0;

    for(auto i=0;i<7;i++)
    {
        sum=sum+A[i];
    }
    cout<<"sum is"<<sum;
    return 0;
 }