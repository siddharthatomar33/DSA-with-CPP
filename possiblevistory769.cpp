#include <bits/stdc++.h>
using namespace std;

int main() {
	int r,o,c;
	cin>>r>>o>>c;
	int rem=((20-o)*36)+c;
	
	if(r<rem){
	    cout<<"yes"<<endl;
	}
	else{
	    cout<<"no"<<endl;
	}
}
