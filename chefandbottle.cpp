#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,k;
        cin>>n>>x>>k;
        if(k<x){
            cout<<0<<endl;
        }
        else{
            cout<<min(n,(k/x))<<endl;
        }
    }
}
