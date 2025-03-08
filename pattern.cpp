#include<iostream>
using namespace std;
int main(){
    int i,j,k,c=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<c;j++){
            cout<<" ";
        }
        for(k=5;k>=i;k--)
        {
            cout<<"*";
        }
        c=c+1;
        cout<<endl;
        
    }


}
