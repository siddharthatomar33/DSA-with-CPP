// Interior Design
// Chef decided to redecorate his house, and now needs to decide between two different styles of interior design.
// For the first style, tiling the floor will cost X1 rupees and painting the walls will cost Y1 rupees.
// For the second style, tiling the floor will cost X2 rupees and painting the walls will cost Y2 rupees.
// Chef will choose whichever style has the lower total cost. How much will Chef pay for his interior design

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){ 
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    
	    int c1=x1+y1;
	    int c2=x2+y2; 
	     
	     if(c1<c2){
	         cout<<c1<<endl;
	         }
	         else {
	             cout<<c2<<endl;
	         }
	}

}
