#include<iostream>
using namespace std;

int findmissingele(int arr[],int n){
    int s=0,e=n-1,mid=s+(e-s)/2,ans=-1;
    
    while(s<=0){
    int diff=arr[mid]-mid;
      if(diff==1){
        s=mid+1;
        }
       else{
        ans=mid;
        e=mid-1;
       }
    mid=s+(e-s)/2;
    }
    return ans+1;
}

int main(){
    int arr[]={1,2,3,4,6,7,8,9};
    int n=8;
    cout<<findmissingele(arr,n);
}