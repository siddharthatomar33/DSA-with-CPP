#include<iostream>
using namespace std;

void printarray(int arr[],int size){  
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }  
    cout<<endl;
}
bool linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            //found
            return true;
        }
    }
    //not found
    return 1;
}
int main(){
    int arr[5]={2,4,5,6,8};
    int size=5;
    int target=10;

    bool ans=linearsearch(arr,size,target);
    if(ans==1){
        cout<<"target found"<<endl;
    }else{
        cout<<"target not found"<<endl;
    }
    //function call
    //printarray(arr,size);
}