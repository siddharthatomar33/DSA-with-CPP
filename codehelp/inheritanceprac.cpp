  #include<iostream>
  #include<string>

  using namespace std;

class vehicle{
public:
    string name;
    string model;
    int nooftyres;

    vehicle(string _name,string _model,int _nooftyres){
        cout<<"I m inside vehicle ctor"<<endl; 
        this->name=_name;
        this->model=_model;
        this->nooftyres=_nooftyres;
    }

public:
  void startengine(){
    cout<<"engine is starting"<<name<<" "<<model<<endl;
  }
  void stopengine(){
    cout<<"engine is stopping"<<name<<" "<<model<<endl;
  }
};

class car:public vehicle{
public:
    int noofdoors;
    string transmissiontype;
public:
car(string _name,string _model,int _nooftyres,int _noofdoors,string _transmissiontype):vehicle(_name,_model,_nooftyres){
    cout<<"i m inside car ctor"<<endl;
    this->noofdoors=_noofdoors;
    this->transmissiontype=_transmissiontype;
    }

    void startac(){
        cout<<"ac has started of"<<name<<endl;
    }
};
class motorcycle:public vehicle{
protected:
    string handstyle;
    string suspension;
public:
motorcycle(string _name,string _model,int _nooftyres,string handstyle,string suspension):vehicle(_name,_model,_nooftyres){
    cout<<"motorcycle ctor called"<<endl;    
    this->handstyle=handstyle;
        this->suspension=suspension;
    }
    void wheelie(){
        cout<<"wheelie done by bike"<<name<<endl;
    }
};

  int main(){
    car A ("maruti  800","LXI",4,4,"manual");
    A.startengine();
    A.startac();
    A.stopengine();

    motorcycle M("BMW","X1",2,"U","Hard");
    M.startengine();
    M.wheelie();
    M.stopengine();

    return 0;
  }