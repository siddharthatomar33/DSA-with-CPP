// Rain in Chefland
// In Chefland, precipitation is measured using a rain gauge in millimetre per hour.Chef categorises rainfall as:
// LIGHT, if rainfall is less than 3 millimetre per hour.
// MODERATE, if rainfall is greater than equal to 3 millimetre per hour and less than 7 millimetre per hour.
// HEAVY if rainfall is greater than equal to 7 millimetre per hour.
// Given that it rains at X millimetre per hour on a day, find whether the rain is LIGHT, MODERATE, or HEAVY.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x<3){
	        cout<<"LIGHT"<<endl;
	    }
	    else if(x>=3 && x<7){
	        cout<<"MODERATE"<<endl;
	    }
	    else if(x>=7){
	        cout<<"HEAVY"<<endl;
	    }
	}

}