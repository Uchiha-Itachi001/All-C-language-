#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("enter the main string : ");
    gets(str);
    char brr[20];
    printf("enter the sub string : ");
    gets(brr);
    char *ptr;
    ptr = strstr(str,brr);
    printf("%d ",ptr);
    if(ptr!= NULL){
        printf("%s is presend ",brr);
    }
    else printf("not presend ");
    return 0;
}
