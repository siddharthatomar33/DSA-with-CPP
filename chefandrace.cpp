#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int x,y,a,b,n=0;
    cin>>x>>y>>a>>b;
    cout<<2-((x==a || x==b)+(y==a || y==b))<<endl;
}
}