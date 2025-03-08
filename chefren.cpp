#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a,b,total=0;
	    cin>>n>>a>>b;
	    
	    for(auto i=1;i<=n;i++){
	        if(i%2==0){
	            total+=a;
	        }
	        else{
	            total+=b;
	        }
	    }
	    cout<<total<<endl;
	}
}
