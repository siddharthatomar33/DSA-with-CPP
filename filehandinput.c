#include<stdio.h>
int main(){
    FILE *fp1;
    char c;
    printf("data input \n");

    fp1=fopen("FILE","w");
    while((c=getchar())!=EOF)
    putc(c,fp1);
    fclose(fp1);
    printf("data input\n");
    
    fp1=fopen("output","r");
    while((c=getchar())!=EOF)
    printf("%c",c);
    fclose(fp1);
    return 0;
}