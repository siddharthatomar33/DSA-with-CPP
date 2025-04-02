#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int a[3] = {0}, b[3] = {0};
        int ta = 0, tb = 0;
        for(int i=0; i<3; i++){
            cin>>a[i];
        }
        for(int i=0; i<3; i++){
            cin>>b[i];
        }
        
        for(int i = 0; i<3-i; i++){
            for(int j = 0; j<3-i-1; j++){
                if(a[j+1]<a[j]){
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
        
        for(int i = 0; i<3-i; i++){
            for(int j = 0; j<3-i-1; j++){
                if(b[j+1]<b[j]){
                    int temp = b[j];
                    b[j] = b[j+1];
                    b[j+1] = temp;
                }
            }
        }
        
        ta = a[1] + a[2];
        tb = b[1] + b[2];
        
        if(ta>tb){
            cout<<"Alice\n";
        }
        else if(tb>ta){
            cout<<"Bob\n";
        }
        else{
            cout<<"Tie\n";
        }

    }

}