#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    
	    int tv1=a-c;
	    int tv2=b-d;
	    
	    if(tv1>tv2){
	        cout<<"second"<<endl;
	    }
	    else if(tv1<tv2){
	        cout<<"first"<<endl;
	    }
	    else {
	        cout<<"any"<<endl;
	    }
	}

}
