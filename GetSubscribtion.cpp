// Get Subscription
// Chef wants to conduct a lecture for which he needs to set up an online meeting of exactly X minutes. The meeting platform supports a meeting of maximum 30 minutes without subscription and a meeting of unlimited duration with subscription.
// Determine whether Chef needs to take a subscription or not for setting up the meet.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    
	    if(x>30){
	        cout<<"yes"<<endl;
	    }
	    else {
	        cout<<"no"<<endl;
	    }
	}

}
