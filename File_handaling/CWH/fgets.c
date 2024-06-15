/*..........USE OF FGETS FUNCTION ............*/
#include<stdio.h>
int main(){
    FILE *ptr = NULL;
    ptr = fopen("b.txt","r");
    char str[100];
/*............FGETS FUNCTION USE TO READ  A STRING INTO THE FILE ......*/
    while(fgets(str,100,ptr)!=NULL){
    printf("%s",str);}
    fclose(ptr);
    return 0;
}