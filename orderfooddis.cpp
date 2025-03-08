#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        
        int perc =x*10/100;
        int flat=100;
        
        if(perc<flat){
            cout<<flat<<endl;
        }
        else{
            cout<<perc<<endl;
        }
        
    }
}
