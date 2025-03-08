// Bull or Bear
// Chef is on his way to become the new big bull of the stock market but is a bit weak at calculating whether he made a profit or a loss on his deal.
// Given that Chef bought the stock at value X and sold it at value Y. Help him calculate whether he made a profit, loss, or was it a neutral deal.

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
	        cout<<"LOSS"<<endl;
	    }
	    else if(x<y){
	        cout<<"PROFIT"<<endl;
	    }
	    else {
	        cout<<"NEUTRAL"<<endl;
	    }
	}

}
