/*..........USE OF FPUTS FUNCTION ............*/
#include<stdio.h>
int main(){
    FILE *ptr = NULL;
    ptr = fopen("b.txt","w");
    char str[100];
/*............FPUTS FUNCTION USE TO WRITE A STRING INTO THE FILE ......*/
    gets(str);
    fputs(str,ptr);
    fclose(ptr);
    return 0;
}