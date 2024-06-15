#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    puts("enter the string: ");
    gets(str);  
    int i=0;
   
int c = strlen(str);
int k= 0;
for(int i=0;i<c;i++){
    if(str[i]==' '){
       for(int j=i;j<c;j++){
        str[j]= str[j+1];
        }
        c--;
    }
    else if(str[i]==' '){
         for(int j=i;j<c;j++){
        str[j]= str[j+1];
        }
        c--;
    }
}
puts(str);

return 0;

}