#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
    while(t--){
        int n,r;
        cin>>n;
        
            r=n%10;
            
        while(n>9){
            n=n/10;
        }
        
        cout<<r+n<<endl;
    }

}
