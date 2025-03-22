#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    double m=(double)a/x;
    double n=(double)b/y;
    
    if(m==n){
        cout<<"both"<<endl;
    }
    else if(m>n){
        cout<<"chefina"<<endl;
    }
    else{
        cout<<"chef"<<endl;
    }
}
}
