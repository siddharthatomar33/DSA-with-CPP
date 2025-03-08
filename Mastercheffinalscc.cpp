// Masterchef finals
// Chef has been working hard to compete in MasterChef.
// He is ranked 
// X
// X out of all contestants. However, only 
// 10
// 10 contestants would be selected for the finals.

// Check whether Chef made it to the top 
// 10
// 10 or not?
#include<iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    if(x<=10)
	    {
	        cout<<"YES"<<endl;
	    }
	    else {
	        cout<<"NO"<<endl;
	         }
	}
	return 0;
}