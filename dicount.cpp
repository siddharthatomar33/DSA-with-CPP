#include<iostream>
using namespace std;

int main(){
    int ba,dis;
    cout<<"enter totalbill amt";
    cin>>ba;
    
    if(ba>=500){
        dis=ba*20/100;
    }
    else if(ba>=100 && ba<500){
        dis=ba*10/100;
    }
    
    cout<<"discount of"<<dis<<endl;
    cout<<"bill to pay is "<<ba-dis<<endl;

return 0;
}