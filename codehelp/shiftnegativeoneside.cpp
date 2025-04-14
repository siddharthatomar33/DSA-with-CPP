#include<iostream>
using namespace std;

void shiftnegative(int arr[],int n){
int j=0;
for(int i=0;i<n;i++){
   if(arr[i]<0){
   swap(arr[i],arr[j]);
   j++;
   }
 }
 cout<<"printing the array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int arr[]={23,-7,12,-10,-11,40,60};
    int n = 7;
    shiftnegative(arr,n);

    // cout<<"printing the array"<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<endl;
    // }
    // cout<<endl;
    return 0;
}