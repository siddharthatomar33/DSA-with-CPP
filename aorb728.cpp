#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,a,b;
        cin>>x>>y;
        
        a=500-(x*2)+1000-(x+y)*4;
        b=1000-(y*4)+500-(x+y)*2;
        
        if(a==b)
        cout<<a<<endl;
        else if(a>b)
        cout<<a<<endl;
        else
        cout<<b<<endl;
    }
}
