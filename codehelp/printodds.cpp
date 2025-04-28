#include<iostream>
#include<climits> // Required for INT_MIN

using namespace std;



int main(){
    int arr[]={10,20,30,40,70,60};
    int n=6;
    int i=0;
    int maxi=INT_MIN;
    maxarray(arr,n,i,maxi);
    cout<<"maxno "<<maxi<<endl;
}
