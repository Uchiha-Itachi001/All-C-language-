#include<stdio.h>

#define pi 3.14215

#define area(r) (pi*r*r);

int main(){

int r;
printf("enter the radious : ");
scanf("%d",&r);
int p = area(r);
printf("%d",p);

return 0;
}