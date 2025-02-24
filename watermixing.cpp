#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        if(a<b){
            if(abs(a-b)<=x){
             cout<<"yes"<<endl;
             }
             else{
                cout<<"no"<<endl;
             }
            }else{
             if(abs(a-b)<=y){
                cout<<"yes"<<endl;
             }
             else{
                cout<<"no"<<endl;
             }
        }
    }
}
