#include<iostream>
using namespace std;

int main(){
    int rows,cols;

    cin>>rows;
    cin>>cols;

    int result=[rows][cols];
    int matrix1[rows][cols];
    int matrix2[rows][cols];

    cout<<"enter elements of matrix 1"<<endl;
    for(auto i=0;i<rows,i++){
        for(auto j=0;j<cols;j++){
            cin>>matrix1[i][j];
        }
    }
    for(auto i=0;i<rows;i++){
        for(auto j=0;j<cols;j++){
            cin>>matrix2[i][j];
        }
    }
    for(auto i=0;i<rows;i++){
        for(auto j=0;j<cols;j++){
            result[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    for(auto i=0;i<rows;i++){
        for(auto j=0;j<cols;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}