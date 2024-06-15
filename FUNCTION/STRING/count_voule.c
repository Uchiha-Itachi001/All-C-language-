#include<stdio.h>
#include<string.h>

void voule(char str[]);

int main()
{
    char str[30];
    printf("Enter the string : ");
    gets(str);
    
    voule(str);

    return 0;
}

void voule(char str[]){
    int n = strlen(str);
    int c = 0;
    for(int i=0;i<n;i++){
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            c++;
        }
    }
    printf("the number of voule is : %d",c);
}