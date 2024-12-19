#include<iostream>
using namespace std;

int main()
{
    int a1[2][3]={{1,2,3},{4,5,6}};
    int a2[3][2]={{1,2},{3,4},{5,6}};
    int result[2][2]={0};

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<3;k++)
            {
                result[i][j]=result[i][j]+(a1[i][k]*a2[k][j]);
            }
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}