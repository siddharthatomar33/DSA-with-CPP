#include <iostream>
using namespace std;

int main() {
    // update your code here
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    
    if(s1==s2 && s2==s3){
        cout<<"equilateral"<<endl;
    }
    else if(s1==s2||s2==s3||s1==s3){
        cout<<"isosceles"<<endl;
    }
    else {
        cout<<"scalene"<<endl;
    }
    

    return 0;
}
