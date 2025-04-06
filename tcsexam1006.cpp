#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int x,y,z;
	    cin>>x>>y>>z;
	   if(a+b+c > x+y+z){
	       cout<<"Dragon\n";
	   }
	    else if(a+b+c < x+y+z){
		cout<<"Sloth"<<endl;
	}else if(a>x){
		cout<<"Dragon"<<endl;
	}else if(a<x){
		cout<<"Sloth"<<endl;
	}else if(b>y){
		cout<<"Dragon"<<endl;
	}else if(b<y){
		cout<<"Sloth"<<endl;
	}else
	cout<<"Tie"<<endl; 
}

	
	return 0;
}