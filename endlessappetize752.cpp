#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int x,y,r;
    cin>>x>>y>>r;
    if((r/30+x)%y==0)
    cout<<(r/30+x)/y<<endl;
    else
    cout<<((r/30+x)/y)+1<<endl;
}
}
