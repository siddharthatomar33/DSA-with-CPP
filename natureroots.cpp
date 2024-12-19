//nature of roots
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float a,b,c,d,r1,r2;
    cout<<"enter a,b,c";
    cin>>a>>b>>c;

    d=b*b-4*a*c;

    if(d==0)
    {
        cout<<"roots are real and equal";
        cout<<endl<<(-b/(2*a));

    }
    else if(d>0)
    {
        cout<<"root are real and unqual";
        cout<<endl<<(-b+sqrt(2*a));

    }
    else 
    cout<<"imaginer";
    return 0;

}
