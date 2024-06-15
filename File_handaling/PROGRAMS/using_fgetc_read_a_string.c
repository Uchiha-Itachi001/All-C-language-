/*........USE OF FGETC FUNCTION..........*/
#include<stdio.h>
int main(){
    FILE *ptr = NULL;
    ptr = fopen("c.txt","r");

    /*.......FGETC FUNCTION USE TO READ A FILE CHARACTER BY CHARACTER.......*/
    int n;
    printf("enter the number of character you wana to read : ");
    scanf("%d",&n);
    char c ;
    for(int i=0;i<n+1;i++){
        c = fgetc(ptr);
        printf("%c",c);
         ptr+i; 
    }
   
   fclose(ptr);
    return 0;
}