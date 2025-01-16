// Car Trip
// Chef rented a car for a day.
// Usually, the cost of the car is Rs 10 per km. However, since Chef has booked the car for the whole day, he needs to pay for at least 300 kms even if the car runs less than 300 kms.If the car ran X kms, determine the cost Chef needs to pay.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int x;
	    cin>>x;
	    if(x>=300){
	    cout<<(x*10)<<endl;
	    }
	    else{
	        cout<<300*10<<endl;
	    }
	    
	 }
	

}
