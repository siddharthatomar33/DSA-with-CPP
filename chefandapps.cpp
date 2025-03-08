#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int s,x,y,z;
        cin>>s>>x>>y>>z;
        
        if((s-(x+y))>=z){
            cout<<0<<endl;
        }
        else if(z<=x+(s-(x+y)) || z<=y+(s-(x+y))){
            cout<<1<<endl;
        }
        else if((s-(x+y))<=z){
            cout<<2<<endl;
        }
    }
}
