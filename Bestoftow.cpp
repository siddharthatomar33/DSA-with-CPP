// Best of Two
// Chef took an examination two times. In the first attempt, he scored X marks while in the second attempt he scored y marks. According to the rules of the examination, the best score out of the two attempts will be considered as the final score.
// Determine the final score of the Chef.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x<y){
            cout<<y<<endl;
        }
        else {
            cout<<x<<endl;
        }
    }
}