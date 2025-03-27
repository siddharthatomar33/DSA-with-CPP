#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int ar[3];
        for(auto i=0;i<3;i++){
           cin>>ar[i];
        }
            for(auto i=0;i<3-1;i++){
                for(auto j=0;j<3-i-1;j++){
                if(ar[j]>ar[j+1]){
                    int temp=ar[j];
                    ar[j]=ar[j+1];
                    ar[j+1]=temp;
                 }
                }
            }
        cout<<ar[3-2]<<endl;
    }
}
