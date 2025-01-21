#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        
        if((x*107/100)>=y){
            cout<<"yes"<<endl;
        }
        else {
            cout<<"no"<<endl;
        }
    }
}
