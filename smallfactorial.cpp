#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>

using namespace std;
using namespace boost::multiprecision;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        cpp_int ans = 1;
        for(int i=1; i<=n; i++){
            ans*=i;
        }
        
        cout<<ans<<endl;
    }

}