#include<iostream>
using namespace std;

int mySqrt(int x) {
    int s=0;
    int e=x;
    long long int mid=s+(e-s)/2;
    int ans;

    while(s<=e){
        //kya mid hi ans nhi hai
        if(mid*mid==x){
         return mid;
        }
        else if(mid*mid<x){
            //ans store
            //right may jao
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;//left may jao
        }
        mid=s+(e-s)/2;
    }  
    return ans;
}
int main(){
    int x;
    cout<<"enter the no";
    cin>>x;

    int r=mySqrt(x);
    cout<<r<<endl;
}