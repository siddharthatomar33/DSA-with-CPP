#include <bits/stdc++.h>
using namespace std;

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n,p=0,x=0;
        cin>>n;
        int arr[n];
        for(auto i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1)
                p++;
            else{
                x++;
            }    
        }
        if(n%2!=0){
            cout<<-1<<endl;
        }
        else if(p==x){
            cout<<0<<endl;
        }
        else if(p!=x){
        cout<<abs(p-(n/2))<<endl;
        }
        
    }


}
