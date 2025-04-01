#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int a,b,k;
    cin>>a>>b>>k;
    
    if(abs(a-b)%k==0){
        cout<<abs(a-b)/k<<endl;
    }
    else{
        cout<<(abs(a-b)/k)+1<<endl;
    }
}
}
