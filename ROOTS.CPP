//FINDING ROOTS OF A QUADRATIC EQ
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float a,b,c,root1,root2;
    cout<<"enter a,b,c ";
    cin>>a>>b>>c;
    root1=(-b+sqrt(b*b-4*a*c))/(2*a);
    root2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"root are "<<root1<<" "<<root2;
    return 0;

}