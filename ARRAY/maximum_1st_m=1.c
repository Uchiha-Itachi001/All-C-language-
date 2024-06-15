#include<stdio.h>
#include<limits.h>
int main(){
    char str1[10];
    char str2[10];
    printf("1st string : ");
    gets(str1);
    printf("2st string : ");
    gets(str2);
    int i=0;
    int c = 0;
    while(str1[i] != '\0'){
        c++;
        i++;
    }
    for(int j=0;str2[j]!='\0';j++){
        str1[c]=str2[j];
        c++;
    }

  
printf("%s",str1);



        return 0;}