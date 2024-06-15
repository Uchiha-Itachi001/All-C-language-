    #include<stdio.h>
    int main(){

/*.............OPENINGH A FILE...................*/

FILE *fptr;
fptr = fopen ("pankoj.txt","w");

/*.............CHAKING WHEATHER A FILE IS OPEN OR NOT..........*/

    if(fptr!=NULL){
        printf("file opening successfull");
    }
    else{
        printf("file opening unsuccessfull");
    }

/*...............CLOSING A FILE....................*/

fclose(fptr);
        return 0;
    }