//menu of mathmethics
#include <iostream>
using namespace std;

int main()
{
    int n,a,b,c;
    cout<<"MENU\n 1-additon\n 2-sub\n 3-multi\n 4-div\n";
    cout<<"enter option\n";
    cin>>n;
    cout<<"enter values of a and b\n";
    cin>>a>>b;

    switch(n)
 {
    case 1:
        c=a+b;
        cout<<"addition"<<c;
        break;
    case 2:
        c=a-b;
        cout<<"sub"<<c;
        break;
    case 3: 
        c=a*b;
        cout<<"multi"<<c;
        break;
    case 4: 
        c=a/b;
        cout<<"div"<<c;
        break;
    default: 
        cout<<"invalid entry";                        
 }
    return 0;
}