#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(z<(y/x)){
            cout<<0<<endl;
        }
        else{
        cout<<z-(y/x)<<endl;
        }
    }
}
