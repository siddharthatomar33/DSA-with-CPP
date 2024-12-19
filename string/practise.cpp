#include<iostream>
#include<string.h>
using namespace std;

int main ()
{
 char s1[20]="siddhartha";
 char s2[20]="sonam";
 char s3[20]=" is the husband of ";

 strcat(s1,s3);
 strcat(s1,s2);
 cout<<s1<<endl;

return 0;
}