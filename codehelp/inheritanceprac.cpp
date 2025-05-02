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

car(string _name,string _model,int _nooftyres,int _noofdoors,string _transmissiontype):vehicle(_name,_model,_nooftyres){
    cout<<"i m inside car ctor"<<endl;
    this->noofdoors=_noofdoors;
    this->transmissiontype=_transmissiontype;
    }

    void startac(){
        cout<<"ac has started of"<<name<<endl;
    }
};

  int main(){
    car A ("maruti  800","LXI",4,4,"manual");
    A.startengine();
    A.startac();
    A.stopengine();

    return 0;
  }