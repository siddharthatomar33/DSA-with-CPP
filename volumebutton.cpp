#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    // Calculate the absolute difference between x and y
			    
	    if(x>y){
	        cout<<x-y<<endl;
	    }
	    else if(x==y){
	        cout<<0<<endl;
	    }
	    else if(x<y){
	        cout<<y-x<<endl;
	    }
	    
    }
}
