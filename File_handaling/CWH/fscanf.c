/*..........USE OF FSCANF..........*/
#include<stdio.h>
int main(){
    FILE *ptr = NULL;
    ptr = fopen("text.txt","r");
    /*....FSCANF FUNCTION USE TO READ A FILE....*/

    char str[20];
    /*....FSCANF FUNCTION DO NOT READ SPACE, IF IT FIND A SPACE IT TERMINATE THE CODE.....*/
    fscanf(ptr,"%s",str);
    
    puts(str);

    return 0;
}