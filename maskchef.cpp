#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	 int t;
	 cin>>t;
	 while(t--){
	     int x,y;
	     cin>>x>>y;
	     
	     int a= x*100;
	     int b= y*10;
	     
	     if(a==b || a>b){
	         cout<<"cloth"<<endl;
	     }
	     else{
	         cout<<"DISPOSABLE"<<endl;
	     }
	     
	 }

}
