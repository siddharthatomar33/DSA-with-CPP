#include<stdio.h>
#include<string.h>

struct employee{
    int id;
    char name[20];
};

struct employee emp[5];

int main(){
printf("enter the names of employees");
//using for loop for inputng names
for(int i=0;i<5;i++){
   scanf("%s",emp[i].name);
}
// strcpy(emp[0].name,"sam");
// strcpy(emp[1].name,"ram");
// strcpy(emp[2].name,"sid");
// strcpy(emp[3].name,"nara");
// strcpy(emp[4].name,"kri");

//multi id's of employee input
for(int i=0;i<5;i++){
    emp[i].id=i+1;
}
printf("\n employee details: \n");
//printing multiple output
for(int i=0;i<5;i++){
    printf("employee id: %d- employee name: %s\n",emp[i].id,emp[i].name);
}
return 0;
}
