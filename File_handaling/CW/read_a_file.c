#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("pankoj.txt","r");
    char str[100];
    while(fgets(str,100,fptr)){
        printf("%s",str);
    }

    return 0;
}