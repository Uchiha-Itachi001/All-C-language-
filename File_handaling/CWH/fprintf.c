/*..........USE OF FPRINTF ............*/
#include<stdio.h>
int main(){ 
    FILE *ptr = NULL;
    ptr = fopen("p.txt","w");

   /*....FPRINTF FUNCTION USE TO WRITE IN THE FILR....*/ 
   
   char str[20];

   puts("enter the string : ");
   gets(str);
   fprintf(ptr,"%s",str);
    fclose(ptr);
    return 0;
}