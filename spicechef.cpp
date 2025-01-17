// Spice Level
// Each item in Chef’s menu is assigned a spice level from 1 to 10. Based on the spice level, the item is categorised as:MILD: If the spice level is less than 4.
// MEDIUM: If the spice level is greater than equal to 4 but less than 7.
// HOT: If the spice level is greater than equal to 7
// Given that the spice level of an item is X, find the category it lies in.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x<4){
	        cout<<"MILD"<<endl;
	    }
	    else if(x>=4 && x<7){
	        cout<<"MEDIUM"<<endl;
	    }
	    else if(x>=7){
	        cout<<"HOT"<<endl;
	    }
	}

}
