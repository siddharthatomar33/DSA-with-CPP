//multiplying matrixs
#include<iostream>
using namespace std;

int main()
{
    int a[2][3]={{2,5,9},{7,3,6}};
    int b[3][2]={{6,3},{9,5},{6,8}};
    int c[2][2];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=a[i][j]*b[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
           cout<<c[i][j]<<endl; 
        }
    } 
}