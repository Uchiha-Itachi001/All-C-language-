#include<stdio.h>
#include<string.h>
 
int main(){
    
    char str[100];
    puts("enter the string : ");
gets(str);
  int i=0,c=0;
    while(str[i]!='\0')
    {c++;
    i++;}
char a='k';
printf("enter thye alphabet : ");
scanf("%c",&a);
 int k;
 printf("enter the number : ");
 scanf("%d",&k);

for(int i=c;i>=k-1;i--){
    str[i+1]=str[i];
}

str[k-1]=a;
printf("%s",str);
    return 0;
}