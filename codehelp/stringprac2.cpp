#include<iostream>
using namespace std;

int main(){
//creation
string name;
cin>>name;
//printing
// getline(cin,name);
// cout<<name<<endl;
//printing all the elements in string
int i=0;
while(name[i]!='\0'){
    cout<<name[i]<<endl;
    i++;
}

return 0; 
}