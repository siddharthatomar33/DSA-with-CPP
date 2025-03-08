// Good Investment or Not
// Chef has invested his money at an interest rate of 
// X percent per annum while the current inflation rate is 
// Y percent per annum.
// An investment is called good if and only if the interest rate of the investment is at least twice of the inflation rate.
// Determine whether the investment made by Chef is good or not.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x>=2*y){
	        cout<<"yes"<<endl;
	    }
	    else {
	        cout<<"no"<<endl;
	    }
	}
	

}
