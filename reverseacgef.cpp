#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,r,rev=0;
	    cin>>n;
	    while(n>0){
	        r=n%10;
	        n=n/10;
	        rev=rev*10+r;
	    }
	    cout<<rev<<endl;
	}
}
