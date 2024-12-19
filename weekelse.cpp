//weekusing else if
#include<iostream>
using namespace std;

int main()
{
    int d;
    cout<<"enter the no."<<endl;
    cin>>d;

    if(d==1){
        cout<<"mon"<<endl;
    }else if(d==2){
        cout<<"tue"<<endl;
    }else if(d==3){
        cout<<"wed"<<endl;
    }else if(d==4){
        cout<<"thr"<<endl;
    }else if(d==5){
        cout<<"fri"<<endl;
    }else if(d==6){
        cout<<"sat"<<endl;
    }else if(d==7){
        cout<<"sun"<<endl;
    }else{
     cout<<"wrong input_please check your input";
    }
    return 0;
}