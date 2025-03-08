#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int na,nb,nc;
	    cin>>na>>nb>>nc;
	    if(na>nb+nc || nb>na+nc || nc>nb+na){
	        cout<<"yes"<<endl;
	    }
	    else {
	        cout<<"no"<<endl;
	    }
	}

}
