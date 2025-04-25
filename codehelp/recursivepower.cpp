#include<iostream>
using namespace std;

int pow(int n){
    //base case
    if(n==0){
        return 1;
    }
    //recursive call
    //pow(n)=2*pow(n-1);

    int recckaans=pow(n-1);
    int finalans=2*recckaans;
    return finalans;
    //processing(optional) 

}
int main(){

    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    int ans=pow(n);
    cout<<"power of "<<n<<" is: "<<ans<<endl;
    return 0;
}