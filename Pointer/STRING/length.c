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
    int c =0;
    for(int i=0;*(ptr+i)!='\0';i++){
        c++;  //PRINT
    }
    printf("The length of the string is : %d",c);


    return 0;
}