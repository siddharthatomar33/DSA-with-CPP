Read Pages
Chef has started studying for the upcoming test. The textbook has 
N
N pages in total. Chef wants to read at most 
X
X pages a day for 
Y
Y days.

Find out whether it is possible for Chef to complete the whole book.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x,y,d;
        cin>>n>>x>>y;
        d=x*y;
        
        if(n<=d){
            cout<<"yes"<<endl;
        }
        else {
            cout<<"no"<<endl;
        }
    }
}
