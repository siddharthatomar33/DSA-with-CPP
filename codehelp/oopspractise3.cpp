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

    //ctor: parameterised ctor
    student(int id, int age,string name,int nos){
        cout<<"student Parameterized ctor called"<<endl;
        this->id=id;
        this->age=age;
        this->name=name;
        this->nos=nos;
    }
    //ctor: copy ctor
    //& by reference srcobj=>A
    student(const student &srcobj){ 
        cout<<"student Parameterized copy ctor called"<<endl;
        this->id=srcobj.id;
        this->age=srcobj.age;
        this->name=srcobj.name;
        this->nos=srcobj.nos;
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

    // student B(2,10,"sonam ",5);
    
    // cout<<A.name<<" "<<A.age<<endl;
    // cout<<B.name<<" "<<B.age<<endl;
    // A.bunk();
    // B.sleep();
    
//_________________________________________________________
    // student A(1,15,"siddhartha ",4);//stack allocation
    // //copy ctor
    // student C=A;
    // cout<<C.name<<" "<<A.name<<endl;
//_________________________________________________________
//Dynamic alloacation
student *A=new student(1,14,"siddhartha ",7);
cout<<A->name<<endl;
cout<<A->age<<endl;
A->study();
delete A;
    return 0;
}