/*.........USE OF FPUTC FUNCTION.........*/
#include<stdio.h>
int main(){
    FILE *ptr = NULL;
    ptr = fopen("a.txt","w");
/*.............FPUTC FUNCTION USE TO WRITE A SINGLE CHARACTER..............*/
    fputc('p',ptr);
    fclose(ptr);
    return 0;
}