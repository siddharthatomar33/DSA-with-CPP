#include<iostream>
using namespace std;

float add(float a, float b)
{
    float z=a+b;
    return z;
}
int main(){
    float x=25.55, y=25.589;
    cout<<add(x,y)<<endl;
    return 0;
}
