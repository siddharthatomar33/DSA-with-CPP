// Four Tickets
// Four friends want to attend a concert. Each ticket costs X rupees.
// They have decided to go to the concert if and only if the total cost of the tickets does not exceed 1000 rupees.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x*4<=1000){
	        cout<<"yes"<<endl;
	    }
	    else {
	        cout<<"no"<<endl;
	    }
	}

}
