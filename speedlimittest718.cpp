#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        float a, b, x, y;
        cin >> a >> x >> b >> y;
        
        if ((a / x) == (b / y)) {
            cout << "equal" << endl;
        } else if ((a / x) > (b / y)) {
            cout << "alice" << endl;
        } else {
            cout << "bob" << endl;
        }
    }
    return 0;
}
