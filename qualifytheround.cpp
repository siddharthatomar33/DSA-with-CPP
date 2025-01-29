#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,a,b;
        cin>>x>>a>>b;
        int e=a*1;
        int h=b*2;
        if(e+h>=x){
            cout<<"qualify"<<endl;
        } 
        else {
            cout<<"notqualify"<<endl;
        }
    }
}
