#include <bits/stdc++.h>
using namespace std;

int main() {
    int p1,p2,p3,p4,day=0;
    cin>>p1>>p2>>p3>>p4;
    
    if(p1>=10){
        day++;
    }if(p2>=10){
        day++;
    }if(p3>=10){
        day++;
    }if(p4>=10){
        day++;
    }
    cout<<day<<endl;
}   
