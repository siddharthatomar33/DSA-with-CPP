// Chairs Requirement
// Chef's coding class is very famous in Chefland.
// This year X students joined his class and each student will require one chair to sit on. Chef already has Y chairs in his class. Determine the minimum number of new chairs Chef must buy so that every student is able to get one chair to sit on.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x>y){
	    cout<<x-y<<endl;
	    }
	    else { 
	        cout<<0<<endl;
	    }
	}

}