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

private:
    int *gpa;
    string gf;

public:
    //ctor: parameterised ctor
    student(int id, int age,string name,int nos, float gpa,string gf){
        cout<<"student Parameterized ctor called"<<endl;
        this->id=id;
        this->age=age;
        this->name=name;
        this->nos=nos;
        this->gpa=new int(gpa);
        this->gf=gf;
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

private:
void gfchatting(){
    cout<<this->name<<"chatting with gf"<<endl;
}    
};
int main(){
student A(1,12,"siddhartha",5,7.8,"sonam");
cout<<A.age<<endl;
cout<<A.gf<<endl;

A.gfchatting();
//_________________________________________________________
//stack
    // student A(1,15,"siddhartha ",4);
    // //copy ctor
    // student C=A;
    // cout<<C.name<<" "<<A.name<<endl;
//_________________________________________________________
 //Dynamic alloacation
// student *A=new student(1,14,"siddhartha ",7);
// cout<<A->name<<endl;
// cout<<A->age<<endl;
// A->study();
// delete A;
    return 0;
}