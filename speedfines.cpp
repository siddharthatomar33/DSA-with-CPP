// Overspeeding Fine
// Chef was driving on a highway at a speed of X km/hour.To avoid accidents, there are fine imposed on overspeeding as follows:
// No fine if the speed of the car ≤70 km/hour.Rs 500 fine if the speed of the car is strictly greater than 70 and ≤100 Rs 2000 fine if the speed of the car is strictly greater than 
// 100.Determine the fine Chef needs to pay.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x<=70){
	        cout<<0<<endl;
	    }
	    else if(x>70 && x<=100){
	        cout<<500<<endl;
	    }
	    else if(x>100){
	        cout<<2000<<endl;
	    }
	}

}