#include<stdio.h>

int main(){
/*..........OPEN THE 1ST FILE..........*/
    FILE *ptr;
    ptr = fopen("p.txt","w");
    char str[20];
    printf("enter the 1st file info : ");
    gets(str);
    fputs(str,ptr);         

/*...........OPEN THE 2ND FILE ............*/
    FILE *qtr;
    qtr = fopen("q.txt","w");
    printf("enter the 2nd file info : ");
    char ttr[20];
    gets(ttr);
    fputs(ttr,qtr);         //...WRITE SOMTHING ON THE 2ND FILE

/*...........MARGE TWO FILE INFORMATION INTO ONE FILE........*/
    FILE *rtr;
    rtr = fopen("r.txt","w");
    
  
    fputs(str,rtr);
    
    fputs(ttr,rtr);
    fclose(ptr);
    fclose(qtr);
    fclose(rtr);

    return 0;
}