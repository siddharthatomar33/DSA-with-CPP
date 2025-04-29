#include<iostream>
using namespace std;

bool checksorted(int arr[],int n,int i){
    //base case(here its consider as single element)
    if(i==n-1){
        return true;
    }
    bool currans;
    bool recurkaans;
    //1case solve karo
    if(arr[i+1]>arr[i]){
        currans=true;
    }
    //recursive call
    recurkaans=checksorted(arr,n,i+1);
    if(currans==true && recurkaans==true)
        return true;
        else
        return false;  
}

int main(){
    int arr[]={10,20,30,40,50};
    int n=5;
    int i=0;
    bool ans=checksorted(arr,n,i);
    cout<<"array is sorted "<<ans<<endl;
}