// Multivitamin Tablets
// The doctor prescribed Chef to take a multivitamin tablet 
// 3 times a day for the next X days.
// Chef already has Y multivitamin tablets.
// Determine if Chef has enough tablets for these X days or not.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x*3<=y){
	        cout<<"yes"<<endl;
	    }
	    else {
	        cout<<"no"<<endl;
	    }
	}

}
