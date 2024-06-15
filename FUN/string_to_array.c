#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    puts("enter the string :");
    gets(str);
    int x = strlen(str);
    int arr[x];

    for(int i=0;i<x;i++){
        arr[i] = str[i];
    }
   
    puts("string to array : \n");
    
    for(int i=0;i<x;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}