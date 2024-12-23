#include<iostream>
using namespace std;


//1 write a Min() function here to Min of 2 integers
int min(int a, int b)
{
    if(a>b){
    return b; 
    }
    else {
    return a;
    }
     
}
//2 write a Min() function here to Min of 3 integers
int min(int a, int b, int c)
{
    if((a<b) && (a<c)){
        return a;
    }
    else if(b<c){
     return b;   
    } 
    else {
    return c;
    }
}
//3 write a Min() function here to Min of 2 floats
float min(float a, float b)
{
    if (a>b){
        return b;
    }
    else{
        return a;
    }
}
int main()
{
    cout<<min(10,5)<<endl;
    cout<<min(12,7,9)<<endl;
    cout<<min(18.8f,9.5f)<<endl;

    return 0;
}