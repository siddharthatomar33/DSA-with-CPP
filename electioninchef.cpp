#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int cnt=0,n,x;
        cin>>n>>x;
        int a[n];
        
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=x){
            cnt++;
            }
        }
        cout<<cnt<<endl;
    }

}