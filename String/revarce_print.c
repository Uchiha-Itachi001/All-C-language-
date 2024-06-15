#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    puts("enter the string : ");
    scanf("%[^\n]s",str);
    int i=0,c=0;
    while(str[i]!='\0'){
        c++;
        i++;
    }
    for(int i=0;i<c/2;i++){
        int t=str[i];
        str[i]=str[c-1-i];
        str[c-1-i]=t;
    }
puts("the revarc array : ");
puts(str);

    return 0;
}