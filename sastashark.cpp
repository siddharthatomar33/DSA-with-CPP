#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int com1=a*100/10;
	    int com2=b*100/20;
	    if(com1>com2){
	        cout<<"first"<<endl;
	    }
	    else if(com1==com2){
	        cout<<"Any"<<endl;
	    }
	    else{
	        cout<<"second"<<endl;
	    }
	}

}
