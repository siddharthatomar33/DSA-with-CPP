#include <bits/stdc++.h>
using namespace std;

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n>m){
            cout<<n+(n-m)<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }
}