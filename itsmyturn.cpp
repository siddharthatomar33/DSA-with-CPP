#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int p,q;
        cin>>p>>q;
        int x=p+q;
        int y=x+1;
        if(y%4==1 || y%4==2){
            cout<<"alice"<<endl;
        }
        else{
            cout<<"bob"<<endl;
        }
    }
    
}
