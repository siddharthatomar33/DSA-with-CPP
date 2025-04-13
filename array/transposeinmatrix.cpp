#include<iostream> 
using namespace std;


// bool findtarget(int arr[][4],int row,int col,int target){
    //      for(auto i=0;i<row;i++){
        //         for(auto j=0;j<col;j++){
            //             if(arr[i][j]==target){
                //                 return true;
                //             }
                //         }
                //      }
                //      //element not found
                //      return false;
                // }
void printarray(int arr[4][4],int row,int col){
                  for(auto i=0;i<row;i++){
                      for(auto j=0;j<col;j++){
                        cout<<arr[i][j]<<" ";
                       }
                       cout<<endl;
                    }
                }
void transpose(int arr[4][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=i; j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
} 
int main(){
//initaize
//printing
// printarray(arr,row,col);
// int arr[2][2];
// int row=2;
// int col=2;
// for(auto i=0;i<row;i++){
    //     for(auto j=0;j<col;j++){
        //         cin>>arr[i][j];
        //     }
        // }
        int arr[4][4]={
                {1,2,3,4},
                {5,6,7,8},
                {9,10,11,2},
                {12,24,46,32}
            };

            int row=4;
            int col=4;
            cout<<"before"<<endl;
            printarray(arr,row,col);
            transpose(arr,row,col);
            cout<<"after"<<endl;
            printarray(arr,row,col);


            // int target=11;
            // int result=findtarget(arr,row,col,target);
            // cout<<result<<endl;
return 0;
} 