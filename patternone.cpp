#include<stdio.h>
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n*2;j++){
            if(j>=(n-i) && j<=(n+i)){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}