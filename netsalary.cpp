//wap to cal net salary 
#include<iostream>

using namespace std;
int main()
{
    float basicsal,allow,deduc,netsal;
    cout<<"1.enter Basic salary"<<endl;
    cin>>basicsal;
    cout<<"2.enter allow"<<endl;
    cin>>allow;
    cout<<"3.enter deduc"<<endl;
    cin>>deduc;

    netsal=basicsal+basicsal*allow/100-basicsal*deduc/100;

    cout<<"net salary is "<<netsal<<endl;
}