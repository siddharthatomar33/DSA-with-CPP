#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
	int x,y,z;
	cin>>x>>y>>z;
	cout<<min(10*x,y)*z<<endl;
    }
}
