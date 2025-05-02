#include<iostream>
#include<string>
using namespace std;
//_____________________encapsulation(hiding)________________________
class student{
private:
    //attributes
    int id;
    int age;
    string name;
    int nos;

    float *gpa;
    string gf;

public:
    void setgpa(float a){
        //layer of authentication
        *this->gpa=a;
    }
    float getgpa() const{
        return *this->gpa;
    }
    float getage() const{
        return this->age;
    }
    //ctor: parameterised ctor
    student(int id, int age,string name,int nos, float gpa,string gf){
        cout<<"student Parameterized ctor called"<<endl;
        this->id=id;
        this->age=age;
        this->name=name;
        this->nos=nos;
        this->gpa=new float(gpa);
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

cout<<A.getgpa()<<endl;
A.setgpa(6.7);
cout<<A.getgpa()<<endl;

return 0;
}