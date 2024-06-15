#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char str[30];
    char *ptr = &str[0];

    printf("enter the string :");

    //INPUT STRING.....
    for(int i=0;*(ptr+i)!='\0';i++){    
        scanf("%[^\n]c",(ptr+i));
    }

    printf("The string is : ");
    for(int i=0;*(ptr+i)!='\0';i++){
        printf("%c",*(ptr+i));      //PRINT
    }


    return 0;
}