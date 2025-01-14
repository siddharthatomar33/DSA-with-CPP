// Messi vs Ronaldo
// In Chefland, a football player gets 2 points for each goal and 1 point for each assist.Messi has A goals and B assists this season, whereas Ronaldo has X goals and Y assists.
// Find out the player with more points this season.

#include <bits/stdc++.h>
using namespace std;

int main() {
	 int a,b,x,y;
	 cin>>a>>b>>x>>y;
	 
	 int s1=(a*2)+(b*1);
	 int s2=(x*2)+(y*1);
	 
	 if(s1>s2) {
	     cout<<"messi"<<endl;
	 }
	 else if(s2>s1) {
	     cout<<"ronaldo"<<endl;
	 }
	 else {
	     cout<<"equal"<<endl;
	 }

}
