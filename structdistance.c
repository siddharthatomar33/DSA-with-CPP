#include<stdio.h>

struct distance{
    float inch,feet;
};
int main(){
    struct distance d1;
    struct distance d2;
    float add1,add2;
    
    printf("enter any inch distance:");
    scanf("%f",&d1.inch);
    printf("enter any inch distance:");
    scanf("%f",&d2.inch);
    add1=d1.inch+d2.inch;
    printf("the total distance is %2f inch",add1);

}