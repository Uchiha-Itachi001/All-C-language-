
#include<stdio.h>
int main(){
/*...OPENING THE FIRST FILE IN READ MODE.......*/
    FILE *first;
    char str[100];
    first = fopen("p.txt","r");
    if(first == NULL){
        printf("the sorce file does not found");
    }
    /*.....COPYING ALL INFORMATION INFO 2ND FILE....*/
    while(fgets(str,100,first)!=NULL){
        
        FILE *second;    
        second = fopen("q.txt","a");
        fputs(str,second);

        fclose(second);
    }
    fclose(first);
    
    return 0;
}