// MATH1 Enrolment
// For the upcoming semester, the admins of your university decided to keep a total of X seats for the MATH-1 course. A student interest survey was conducted by the admins and it was found that Y students were interested in taking up the MATH-1 course.Find the minimum number of extra seats that the admins need to add into the MATH-1 course to make sure that every student who is interested in taking the course would be able to do so.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x<y) {
	    cout<<y-x<<endl;
	    }
	    else
	    {
	       cout<<0<<endl; 
	    }
	}
	

}
