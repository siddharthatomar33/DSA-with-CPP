#include<iostream>
using namespace std;

int searchNearlysorted(int arr[],int n,int target){
    int s=0,e=n-1,mid=s+(e-s)/2;
    while(s<=e){
        if(mid-1>0 && arr[mid-1]==target){ //pehele left may check hoga
            return mid-1;
        }
        if(arr[mid]==target){//firr mid prr check hoga
            return mid;
        }
        if(arr[mid+1]==target){//fir right mid + 1 prr chck hoga
            return mid+1;
        }
        if(target>arr[mid]){ //target agar bada toh right jaege+2
        s=mid+2;
        }else{
            e=mid-2;//target agar chota hai toh left jaega
        }
    }mid=s+(e-s)/2;//update
}
return -1;

int main(){
    int arr[]={20,10,30,50,40,70,60};
    int n=7;
    int target=60;

    int targetIndex=searchNearlysorted(arr,n,taregt);
    if(targetIndex==-1){
        cout<<"elememt not there"<<endl;
        else
        cout<<targetIndex<<endl;
    }
}