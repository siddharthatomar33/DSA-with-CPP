#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a=n*x;
        int pizza=a/4;
        if(a%4==0){
        cout<<pizza<<endl;
        }
        else{
        cout<<pizza+1<<endl;
        }
    }
}
