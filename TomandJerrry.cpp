// Tom and Jerry Chase
// In a classic chase, Tom is running after Jerry as Jerry has eaten Tom's favourite food. Jerry is running at a speed of X metres per second while Tom is chasing him at a speed of Y metres per second. Determine whether Tom will be able to catch Jerry.
// Note that initially Jerry is not at the same position as Tom.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x<y){
            cout<<"yes"<<endl;
        }
        else {
            cout<<"no"<<endl;
        }
    }
}
