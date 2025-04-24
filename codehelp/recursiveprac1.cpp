#include<iostream>
using namespace std;
int getfactorial(int n){
    //base case
    if(n==0 || n==1){
        return 1;
    }
    //recursive call
    //fact(n)=n*fact(n-1);
    //big problem=fact(n);
    //choti prblm=fact(n-1);
  
    int recursionkaans=getfactorial(n-1);
    int finalans=n*recursionkaans;
    return finalans;
    //processing(optional) 

}
int main(){

    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    int ans=getfactorial(n);
    cout<<"factorial of "<<n<<"is: "<<ans<<endl;
    return 0;
}