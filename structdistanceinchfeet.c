#include<stdio.h>

struct distance{
    float inch,feet;
};
int main(){
    struct distance d1;
    struct distance d2;
    float add1,add2;
    //in inch's
    printf("enter any inch distance:");
    scanf("%f",&d1.inch);
    printf("enter any inch distance:");
    scanf("%f",&d2.inch);
    add1=d1.inch+d2.inch;
    printf("the total distance is %2f inch\n",add1);
    //in feet's
    printf("enter any feet distance:");
    scanf("%f",&d1.feet);
    printf("enter another distance in feet:");
    scanf("%f",&d2.feet);
    add2=d1.feet+d2.feet;
    printf("the total distance is %2f feet\n",add2);
    
    return 0;
}