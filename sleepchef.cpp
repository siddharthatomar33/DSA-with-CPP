// Sleep deprivation
// A person is said to be sleep deprived if he slept strictly less than 7 hours in a day.Chef was only able to sleep X hours yesterday. Determine if he is sleep deprived or not.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x<7){
	        cout<<"yes"<<endl;
	    }
	    else {
	        cout<<"no"<<endl;
	    }
	}

}
