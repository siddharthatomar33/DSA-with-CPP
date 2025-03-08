// Lunchtime
// Chef has his lunch only between 
// 1 pm and 4 pm (both inclusive).
// Given that the current time is 
// X pm, find out whether it is lunchtime for Chef.

// Input Format
// The first line of input will contain a single integer 
// T, the number of test cases. Then the test cases follow.
// Each test case contains a single line of input, containing one integer 
// X.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x>=1 && x<=4) {
            cout<<"yes"<<endl;
        }
        else {
            cout<<"no"<<endl;
        }
    }
}