#include<stdio.h>
#include<string.h>

 void pan(char str[],int n){
    for(int i=0;i<n/2;i++){
        char t = str[i];
        str[i] = str[n-i-1];
        str[n-1-i] = t;
    }
 }

int main()
{
    
    char str[10];
    puts("enter the string  : ");
    gets(str);

    int n = strlen(str);
    
    pan(str,n);
    puts(str);
    return 0;
}