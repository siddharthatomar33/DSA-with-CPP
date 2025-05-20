#include<iostream>
#include<vector>
using namespace std;


void merge(int arr[],int s,int e,int mid){
    //create left and right arrays
    int leftlength= mid-s+1;
    int rightlength= e-mid;

    int *leftarr=new int[leftlength];
    int *rightarr=new int [rightlength];

    //fill or copy the left and right arrays
    //copy original array values
    //original array ka starting index
    int index=s;
    //copying into left array
    index=mid+1;
    for(int i=0;i<leftlength;i++){
        leftarr[i]=arr[index];
        index++;
    }
    //copying into right array
    for(int i=0;i<rightlength;i++){
        rightarr[i]=arr[index];
        index++;
    }
    //merge logic
    int leftindex=0;
    int rightindex=0;
    int mainarrayindex=s;

    while(leftindex<leftlength && rightindex <rightlength){
        if(leftarr[leftindex]<rightarr[rightindex]){
            arr[mainarrayindex]=leftarr[leftindex];
            leftindex++;
            mainarrayindex++;
        }
        else{
            arr[mainarrayindex]=rightarr[rightlength];
            rightindex;
            mainarrayindex;
        }
    }
    //2 cases
    while(leftindex<leftlength){
        arr[mainarrayindex]=leftarr[leftindex];
        leftindex++;
        mainarrayindex++;
    }
    while(rightindex<rightlength){
        arr[mainarrayindex]=rightarr[rightlength];
        rightindex++;
        mainarrayindex++;
    }

}

void mergesort(int arr[],int s,int e){
   //base case
   if(s>=e){
    return;
   }
   int mid=(s+e)/2;
   //LEFT part recursion se solve karao
   mergesort(arr,s,mid);
   //RIGHT part recusion se solve kaewao
   mergesort(arr,mid+1,e);
   //dono ko merge krna hoga 
   merge(arr,s,e,mid);
}



int main(){
    int arr[]={10,80,110,90,50,30,20,40};
    int size=8;
    int s=0;
    int e=size-1;

    mergesort(arr,s,e);
    
    //printing entire array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}