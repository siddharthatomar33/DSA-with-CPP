//FIND SPEED
#include<iostream>
using namespace std;

int main(){
    int u,v,a;
    float speed;
    cout<<"enter intial final accleration respectively"<<endl;
    cin>>u>>v>>a;
    speed=(v*v-u*u)/(2*a);
    cout<<"Speed is "<<speed<<endl;
    return 0;

}