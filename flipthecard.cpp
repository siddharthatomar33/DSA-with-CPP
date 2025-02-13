#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,n;
        cin>>n>>x;
        if(n>x){
            cout<<min(x,(n-x))<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}
