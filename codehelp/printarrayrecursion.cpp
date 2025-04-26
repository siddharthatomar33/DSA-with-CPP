#include<iostream>
using namespace std;

void printarray(int arr[],int n, int i){
    //base case
    if(index==n){
        //array se bahr aagye hoo
        return;
    }
    //recursive relation
    //ek case humko solve krna hai
    cout<<arr[i]<<" ";
    //recursion call
    printarray(arr, n, i+1);
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int n=6;
    int i=0;
    printarray(arr,n,i);
}