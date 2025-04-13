#include<iostream>
using namespace std;

void printarray(int arr[2][2],int row,int col){
  for(auto i=0;i<row;i++){
      for(auto j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }
}
int main(){
//initaize
// int arr[3][4]={
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,2},
    // };
    //printing
    // printarray(arr,row,col);
int arr[2][2];
int row=2;
int col=2;
for(auto i=0;i<row;i++){
    for(auto j=0;j<col;j++){
        cin>>arr[i][j];
    }
}
return 0;
} 