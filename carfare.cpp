// The Cheaper Cab
// Chef has to travel to another place. For this, he can avail any one of two cab services.The first cab service charges X rupees.The second cab service charges Y rupees.Chef wants to spend the minimum amount of money. Which cab service should Chef take?

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
	         cout<<"SECOND"<<endl;
	     }
	     else if(y>x) {
	         cout<<"FIRST"<<endl;
	     }
	     else {
	         cout<<"ANY"<<endl;
	     }
	}

}
