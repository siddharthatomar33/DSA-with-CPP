// Determine the Score
// Chef appeared for a placement test.There is a problem worth X points. Chef finds out that the problem has exactly 10 test cases. It is known that each test case is worth the same number of points.
// Chef passes N test cases among them. Determine the score Chef will get.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--){
        int x,n;
        cin>>x>>n;
        cout<<x/10*n<<endl;
    }
}
