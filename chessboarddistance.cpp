#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        
        int a=abs(x1-x2);
        int b=abs(y1-y2);
        
        cout<<max(a,b)<<endl;
    }
}
