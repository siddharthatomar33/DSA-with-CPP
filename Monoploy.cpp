#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int p,q,r,s;
        cin>>p>>q>>r>>s;
        if((s+q+r<p) || (p+r+s<q) || (p+q+s<r) || (p+q+r<s)){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}
