// Fever
// Chef is not feeling well today. He measured his body temperature using a thermometer and it came out to be X °F.
// A person is said to have fever if his body temperature is strictly greater than 98 °F.
// Determine if Chef has fever or not.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int x;
	    cin>>x;
	    if(x>98){
	        cout<<"yes"<<endl;
	    }
	    else {
	        cout<<"no"<<endl;
	    }
	}

}
