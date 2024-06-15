#include<stdio.h>
#include<string.h>
int main(){
    char str[10];
    puts("enter the string: ");
    gets(str);  
    int i=0;
   
int c = strlen(str);
int k= 0;
for(int i=0;i<c;i++){
    if(str[i]!=' '){
        k++;
    }
}
printf("%d",k);
return 0;

}