// Saving Taxes
// In Chefland, everyone who earns strictly more than 
// Y
// Y rupees per year, has to pay a tax to Chef. Chef has allowed a special scheme where you can invest any amount of money and claim exemption for it.

// You have earned X(X>Y) rupees this year. Find the minimum amount of money you have to invest so that you don't have to pay taxes this year.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, y;
        cin >> t;
        
        while (t--) {
            cin >> x >> y;
            cout << (x - y) << endl;
        }

}
