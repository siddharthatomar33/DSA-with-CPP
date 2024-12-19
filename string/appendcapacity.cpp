#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="Hello";
    cout<<str.capacity()<<endl;
    str.append("i m sidd harthandgn iodnff siddhartha currently studying in abes college we love this college");
    
    cout<<str.capacity()<<" "<<str.length()<<endl;
    cout<<str<<endl;
    return 0;
}
