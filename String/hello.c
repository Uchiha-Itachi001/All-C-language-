#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    puts("enter the string: ");
    //scanf("%[^\n]s",arr);
    gets(arr);
 puts("the string is: ");
   puts(arr);

    return 0;
}