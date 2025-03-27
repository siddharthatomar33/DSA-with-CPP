#include<iostream>
using namespace std;

void printarray(int arr[],int size){  
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }  
    cout<<endl;
}
int main(){
    int arr[5]={2,4,5,6,8};
    int size=5;
    //function call
    printarray(arr,size);
}