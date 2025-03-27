#include <bits/stdc++.h>
using namespace std;

int main(){
	    int t;
	    cin>>t;
	    while(t--){
	    int a[3];
	    for(int i=0;i<3;i++){
	        cin>>a[i];
	    } 
	        for(int i=0;i<3-1;i++){
	            for(int j=0;j<3-i-1;j++){
	                
	                if(a[j]>a[j+1]){
	                    int temp=a[j];
	                    a[j]=a[j+1];
	                    a[j+1]=temp;
	                }
	            }
	        }
	        cout<<a[3-2]<<endl;
	    }
}