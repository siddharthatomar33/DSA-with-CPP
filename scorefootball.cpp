#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b;
	    cin>>c>>d;
	    if(a<=c&&b<=d){
	        cout<<"possible"<<endl;
	    }
	    else {
	        cout<<"impossible"<<endl;
	    }
	}

}
