#include<stdio.h>

void hanoi(int n,char s,char h,char d);

int main()
{
    int n;
    printf("enter the number of disk : ");
    scanf("%d",&n);
    hanoi(n,'A','B','C');
    return 0;
}
void hanoi(int n,char s,char h,char d){
    if(n==0) return ;
    hanoi(n-1,s,d,h);
    printf("%c -> %c \n",s,d);
    hanoi(n-1,h,s,d);
    }