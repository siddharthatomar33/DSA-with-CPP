#include<iostream>
#include<vector>

using namespace std;

void selectionsort(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int minIndex=i;//considering ith element is smallest
        for(int j=i+1;j<n;j++){
            if(v[i]<v[minIndex]){
                minIndex=j;//update
            }
        }
        swap(v[i],v[minIndex]);
    }
}
int main(){
    vector<int>v={44,33,55,22,11};
    selectionsort(v);
    print(v);
return 0;
}