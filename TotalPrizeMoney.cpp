// Total Prize Money
// In a coding contest, there are prizes for the top rankers. The prize scheme is as follows:
// Top 10 participants receive rupees X each.Participants with rank 11 to 100 (both inclusive) receive rupees Y each.Find the total prize money over all the contestants.


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        cout<<(x*10)+(y*90)<<endl;
        }
    
}