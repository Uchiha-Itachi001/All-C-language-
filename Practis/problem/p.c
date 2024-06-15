/*.........USE OF FPUTC FUNCTION.........*/
#include<stdio.h>
int main(){
    FILE *ptr = NULL;
    ptr = fopen("a.txt","w");
/*.............FPUTC FUNCTION USE TO WRITE A SINGLE CHARACTER..............*/
int n;
printf("enter the  number : ");
scanf("%d",&n);
char c;
int i=0;
while(i!=n+1){
    printf("enter the charactr : ");
    scanf("%c",&c);
    fputc(c,ptr);
    i++;}
    fclose(ptr);
    return 0;
}