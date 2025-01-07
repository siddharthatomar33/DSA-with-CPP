#include<iostream>
using namespace std;

int main() {
	// your code goes here
   int marks;
   cin>>marks;
   if(marks>90){
       cout<<"A"<<endl;
   }
   else if(marks>70){
       cout<<"B"<<endl;
   }
   else if(marks>=40){
       cout<<"C"<<endl;
   }
   else {
       cout<<"F"endl;
   }
   
   return 0;
}