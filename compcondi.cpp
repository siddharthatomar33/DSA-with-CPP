//compound condition
#include<iostream>

using namespace std;
int main(){
    int age;
    cout<<"enter your age";
    cin>>age;
    if(age>=18 && age<=50)
    {
        cout<<"young";
    }
     else
    {
        cout<<"not young";
    }
    return 0;
}