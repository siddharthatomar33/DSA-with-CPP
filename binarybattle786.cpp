#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a,b,pow=0;
        cin>>n>>a>>b;
        
        while(n>1){
            n=n/2;
            pow++;
        }
        cout<<pow*a+(pow-1)*b<<endl;
    }
}
