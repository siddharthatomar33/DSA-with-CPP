// Puzzle Hunt
// Chef and some of his friends are planning to participate in a puzzle hunt event.
// The rules of the puzzle hunt state:
// "This hunt is intended for teams of 6 to 8 people."Chef's team has N people in total. Are they eligible to participate?

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	if(n>=6 && n<=8){
	    cout<<"YES"<<endl;
	}
	else {
	    cout<<"NO"<<endl;
	}
}