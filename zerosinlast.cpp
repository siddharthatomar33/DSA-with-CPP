#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(auto i=0;i<n;i++){
        cin>>arr[i];
    }
    for(auto i=0;i<n-1;i++){
        for(auto j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                // int temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(auto i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}