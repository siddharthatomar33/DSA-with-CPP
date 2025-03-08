#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>x>>n;
        int a=(n-x*100)%100;
        
        if(n>(x*100)){
        if(a==0){
        cout<<(n-x*100)/100<<endl;
        }
        else{
            cout<<(n-x*100)/100+1<<endl;
        }
        }
        else{
            cout<<0<<endl;
        }
    }
}
