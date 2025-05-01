#include<iostream>
#include<string>
using namespace std;

class student{
    public:
    //attributes
    int id;
    int age;
    string name;
    int nos;

    //behaviour/methods/functions
    void study(){
        cout<<this->name<<"studing"<<endl;
    }
    void sleep(){
        cout<<this->name<<"sleeping"<<endl;
    }
    void bunk(){
        cout<<this->name<<"bunking"<<endl;
    }
};
int main(){
    return 0;
}