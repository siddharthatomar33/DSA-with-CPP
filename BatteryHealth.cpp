// Battery Health
// Apple considers any iPhone with a battery health of 80% or above, to be in optimal condition.
// Given that your iPhone has X% battery health, find whether it is in optimal condition.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x>=80){
	        cout<<"yes"<<endl;
	    }
	    else {
	        cout<<"no"<<endl;
	    }
	}

}