#include<stdio.h>
int main(){
/*................OPENING A FILE AND WRITE A CONTEN..............*/
    FILE *fptr;
    fptr = fopen ("pankoj.txt","w");
    char str[100];
    puts("enter the string : ");
    gets(str);

    fputs(str,fptr);
    fclose(fptr);
    return 0;
}