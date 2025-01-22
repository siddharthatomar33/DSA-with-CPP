#include<stdio.h>
#include<string.h>

struct employee{
    int id;
    char name[20];
};
struct employee emp[5];
int main(){

strcpy(emp[0].name,"sam");
strcpy(emp[1].name,"ram");
strcpy(emp[2].name,"sid");
strcpy(emp[3].name,"nara");
strcpy(emp[4].name,"kri");

for(int i=0;i<5;i++){
    emp[i].id=i+1;
}
printf("\n employee details: \n");

for(int i=0;i<5;i++){
    printf("employee id: %d- employee name: %s\n",emp[i].id,emp[i].name);
}
return 0;
}
