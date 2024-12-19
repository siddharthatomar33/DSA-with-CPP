#include<iostream>
using namespace std;

int sum(int a, int b);

int main(){
    int n1,n2;
    cout<<"enter first no."<<endl;
    cin>>n1;
    cout<<"enter sec. no."<<endl;
    cin>>n2;
    //n1 and n2 are actual parameters
    cout<<"the sum is"<<sum(n1,n2);
    return 0;
}
int sum(int a,int b)
{//formal parameters a and b will be taking values from actual parameter n1 and n2
    int c=a+b;
    return c;
}


