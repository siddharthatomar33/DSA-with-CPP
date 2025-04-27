#include<iostream>
#include<climits> // Required for INT_MIN

using namespace std;

void maxarray(int arr[], int n,int i, int &maxi){
    //base case
    if(i==n){
        //entire array traverse hua
        return;
    }
    //ek case mera
    maxi=max(maxi, arr[i]);//dono may se bada dekhre hai
    //baki kam recursion   
    //reursion call
    maxarray(arr,n,i+1,maxi);
}
int main(){
    int arr[]={10,20,30,40,70,60};
    int n=6;
    int i=0;
    int maxi=INT_MIN;
    maxarray(arr,n,i,maxi);
    cout<<"maxno "<<maxi<<endl;
}
