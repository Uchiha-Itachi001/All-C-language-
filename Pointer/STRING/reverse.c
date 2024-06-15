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
    
    for(int i=0;i<c/2;i++){
        int t = *(ptr+i);
        *(ptr+i) = *(ptr+c-i-1);
        *(ptr+c-i-1) = t;
    }

    for(int i=0;i<c;i++){
        printf("%c",*(ptr+i));
    }

    return 0;
}