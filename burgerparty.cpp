// Chef gives Party
// Chef wants to give a burger party to all his 
// N friends i.e. he wants to buy one burger for each of his friends
// The cost of each burger is 
// X rupees while Chef has a total of 
// K rupees.
// Determine whether he has enough money to buy a burger for each of his friends or not.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x,k;
        cin>>n>>x>>k;
        if(n*x<=k){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}
