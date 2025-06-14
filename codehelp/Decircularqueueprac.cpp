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
    else if(front==-1 && rear==-1){//first element
     rear++;
     front++;
     arr[rear]=val;
    }
    else if(front==0 && rear!=n-1){
        //circular nature
        front--;
        arr[front]=val;
    }
    else{
        //normaal case
        front--;
        arr[front]=val;
    }
   }

   void pushback(int val){
    //4 cases
    //overflow
    if((front==-1 && rear==n-1)|| (rear=front-1)){
       cout<<"overflow"<<endl;
    }
    //first element
    else if(front==-1 && rear==-1){
        front++;
        rear++;
        arr[rear]=val;
    }
    //cicular nature
    else if(rear==n-1 && front!=0){
        rear=0;
        arr[rear]=val;
    }
    else{
        //normal case
        rear++;
        arr[rear]=val;
    }
   }
   void popfront(int val){
    //4cases
    //underflow
    if(front==-1 && rear==-1){
        cout<<"underflow"<<endl;
    }
    //single element
    else if(front==rear){
    arr[front]=-1;
    front=-1;
    rear=-1;
    }
    //circular nature
    else if(front==n-1){
      arr[front]=-1;
      front=0;//placing front to the starting of queue
    }
    else{
      //normal case
      arr[front]=-1;
      front++;
    }

  }
  void popback(int val){
    
  }
};