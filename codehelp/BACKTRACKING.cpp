#include<iostream>
#include<vector>
using namespace std;

void mergesortedarrays(int arr[],int sizearr,int brr[],int sizebrr,vector <int>&ans){
    int i=0;
    int j=0;

    while(i<sizearr && j<sizebrr){
        if(arr[i]<brr[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else{
            ans.push_back(brr[j]);
            j++;
        }
    }
    //garr yaha tak aagaya toh doo case ho skte hai
    while(i<sizearr){
        ans.push_back(arr[i]);
        i++;
    }
    while(j<sizebrr){
        ans.push_back(brr[j]);
        j++;
    }
}
int main(){
    int arr[]={10,30,50,70};
    int sizearr=4;

    int brr[]={20,40,50,60,80,90,100};
    int sizebrr=6;

    vector<int>ans;

    mergesortedarrays(arr,sizearr,brr,sizebrr,ans);
    //printing ans
    for(int num: ans){
        cout<<num<<" ";
    }

    return 0;
}