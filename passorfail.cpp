#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n,x,p;
    cin>>n>>x>>p;
    if(x==0){
        cout<<"fail"<<endl;
    }
    else if((x*3-(n-x))>=p){
        cout<<"pass"<<endl;
    }
    else{
        cout<<"fail"<<endl;
    }
}
}
