#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int h,x,y,count=1;
    cin>>h>>x>>y;
    
    if((h-y)%x==0){
        cout<<count+((h-y)/x)<<endl;
        }
        else{
        cout<<count+((h-y)/x)+1<<endl;
    }
}
}
