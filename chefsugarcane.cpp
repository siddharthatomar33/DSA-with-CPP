#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    t=n*50;
	    cout<<t-((t*20/100)+(t*20/100)+(t*30/100))<<endl;
	}

}