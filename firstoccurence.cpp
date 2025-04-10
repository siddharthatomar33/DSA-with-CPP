#include<iostream>
using namespace std;
int findFirstoccurence(int arr[],int n,int target){
int s=0; 
int e=n-1;
int mid=s+(e-s)/2;
int ans=-1;

while(s<=e){
    if(arr[mid]==target){
        ans=mid;
        e=mid-1;//search in left for more occurecne
    }
    else if(target>arr[mid]){
        //right
        s=mid+1;
    }
    else if(target<arr[mid]){
        e=mid-1;
    }
    mid=s+(e-s)/2;
}
return ans;

}
int main(){
    int arr[]={10,20,30,30,30,40,50,60,70};
    int target=30;
    int n=9;
    int ansIndex=findFirstoccurence(arr,n,target);
    if(ansIndex ==-1){
        cout<<"element not found"<<endl;
        }
     else{
        cout<<"element found at "<<ansIndex<<endl;
        }
 return 0;
}