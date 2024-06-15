#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    puts("enter the string : ");
    gets(str);
int n;
char a;
printf("enter the alphabet : ");
scanf("%c",&a);
printf("enter the number  : ");
scanf("%d",&n);

str[n-1]=a;
puts("now the string is : ");
puts(str);
    return 0;
}