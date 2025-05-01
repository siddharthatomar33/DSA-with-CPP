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
    
    //ctor: (Default constructor)
    student(){
        cout<<"student default ctor called"<<endl;
    }

    //ctor: parameterised ctor
    student(int id, int age,string name,int nos){
        cout<<"student Parameterized ctor called"<<endl;
        this->id=id;
        this->age=age;
        this->name=name;
        this->nos=nos;
    }

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
    //dtor: Default dtor(destructor)
    ~student(){
        cout<<"student default Dtor called"<<endl;
    }
};
int main(){

    // student A;
    // A.id=1;
    // A.age=15;
    // A.name="siddhartha ";
    // A.nos=6;

    // A.study();

    // student B;
    // A.id=2;
    // A.age=17;
    // A.name="sonam ";
    // A.nos=5;

    // A.sleep();

    student A(1,15,"siddhartha ",4);
    student B(2,10,"sonam ",5);

    // cout<<A.name<<" "<<A.age<<endl;
    // cout<<B.name<<" "<<B.age<<endl;
    A.bunk();
    B.sleep();
    return 0;
}