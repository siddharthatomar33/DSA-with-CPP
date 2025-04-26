#include<iostream>
using namespace std;
bool searcharray(int arr[], int n, int i,int target){
    //base case
    //2 base case->found / not found

    //no found
    if(i>=n){
     return false;
    }
    //found
    if(arr[i]==target){
        return true;
    }
    //recursion call
    bool ans= searcharray(arr,n,i+1,target);
    return ans;
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int n=6;
    int i=0;
    int target=50;
    cout<<searcharray(arr,n,i,target)<<endl;
}