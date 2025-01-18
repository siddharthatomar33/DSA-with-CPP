// ATM
// Pooja would like to withdraw X US Dollar from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). For each successful withdrawal the bank charges 0.50 US Dollar.
// Calculate Pooja's account balance after an attempted transaction.

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int x;
	float y;
	cin>>x>>y;
	
	if ((x%5==0) && (x<=y-0.5)) {
	    cout<<(y-x)-0.5<<endl;
	}
	else{
	    cout<<y<<endl;
	}
	 

}
