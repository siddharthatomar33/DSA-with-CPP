#include<iostream>
#include<climits> // Required for INT_MIN

using namespace std;
//by reference(&)used taki actual value may value change ho, wrna recurion hote waqt jo max. hoga wo copied value dekhane lagega 
void maxarray(int arr[], int n,int i, int &mini){
    //base case
    if(i==n){
        //entire array traverse hua
        return;
    }
    //ek case mera
    mini=min(mini, arr[i]);//dono may se bada dekhre hai
    //baki kam recursion
    //reursion call
    maxarray(arr,n,i+1,mini);
}
int main(){
    int arr[]={10,20,30,40,70,60};
    int n=6;
    int i=0;
    int mini=INT_MAX;
    maxarray(arr,n,i,mini);
    cout<<"maxno "<<mini<<endl;
}
