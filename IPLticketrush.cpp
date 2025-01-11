// IPL Ticket Rush
// DAIICT college students want to attend an IPL match.
// A total of N students from the college want to go while only M tickets are available for the match.
// Determine how many students won't be able to book tickets.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n>m){
        cout<<n-m<<endl;
        }
        else {
            cout<<0<<endl;
        }
    }
}
