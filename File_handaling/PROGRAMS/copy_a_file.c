/*.............1ST OPEN A FILE AND WRITE SOMTHING ON IT . AFTER THAT COPY THE FILE'S INFORMATION INTO ANOTHER FILE......................*/

#include<stdio.h>
int main(){
    /*............OPENING 1ST FILE ,AND WRITE SOMTHING ON IT.............*/

     FILE *ptr;
    ptr = fopen("p.txt","w");
    char str[100];
    puts("enter the string : ");
    gets(str);
    fputs(str,ptr);
    fclose(ptr);

    /*.............READ THE 1ST FILE AND PUT THE INFORMATION INTO ANOTHER FILE(2ND FILE)............*/

    FILE *pt;
    pt = fopen("p.txt","r");
    while(fgets(str,100,pt)!=NULL){
        
        FILE *p;    //2ND FILE OPEN AND APPEND OR COPY THE INFORMATION 
         p = fopen("q.txt","a");
        fputs(str,p);

        fclose(p);
    }
    
    return 0;
}