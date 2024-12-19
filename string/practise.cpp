#include<iostream>
#include<string.h>
using namespace std;

int main ()
{
 char s1[20]="siddhartha";
 char s2[20]="sonam";
 char s3[20];

 strcpy(s3,strcat(s1,s2));
 cout<<s2<<endl;

return 0;
}