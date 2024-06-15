/*........USE OF FGETC FUNCTION..........*/
#include<stdio.h>
int main(){
    FILE *ptr = NULL;
    ptr = fopen("c.txt","r");
    /*.......FGETC FUNCTION USE TO READ A FILE CHARACTER BY CHARACTER.......*/
    char c = fgetc(ptr);
    printf("%c",c);
    c = fgetc(ptr);
   fclose(ptr);
    return 0;
}