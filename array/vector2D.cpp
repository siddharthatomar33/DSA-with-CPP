#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;  //dynamic array

int main(){
// int arr[5];
// vector<int>v(5);
vector<vector<int>>arr(5,vector<int>(10,0));
//row size -> arr.size()
for(auto i=0;i<arr.size();i++){
    for(auto j=0;j<arr[i].size();j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}