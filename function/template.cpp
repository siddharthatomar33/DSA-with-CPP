#include<iostream>
using namespace std;


//write a Max() function template for 2 numbers
template <class T>
T Max (T a ,T b)
{
    return a>b?a:b;
}

int main()
{
    cout<<max(10,5)<<endl;
    cout<<max(12.5f,17.3f);

    return 0;
}
