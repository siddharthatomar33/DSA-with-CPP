//doubly ended queue + circular nature
 #include<iostream>
 #include<queue>
 using namespace std;

 class decircularqueue{
    public:
    int * arr;
    int n;
    int front;
    int rear;

  decircularqueue(int size){
    this->n=size;
    arr=new int[size];
    front=-1;
    rear=-1;
  }
  
  void pushfront(int val){
    //4cases
    //overflow
    if((front==0 && rear==n-1)||(rear=front-1)){
        cout<<"overflow"<<endl;
    }
    else if(front==-1 && rear==-1)

  }
};