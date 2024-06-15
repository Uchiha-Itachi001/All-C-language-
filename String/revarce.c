#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter the string : ");
    scanf("%[^\n]s",str);
    int i=0,n=0;
    while(str[i]!='\0'){
        n++;
        i++;
    }
    for(int i=0,j=n-1;i<=j;i++,j--){
        int t=str[i];
        str[i]=str[j];
        str[j]=t;
    }
    puts("the revarce string is :");
    puts(str);

    return 0;
}