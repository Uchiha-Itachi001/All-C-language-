#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
int *p=(int *)malloc(n*sizeof(int));
int *t=p;
for(int i=1;i<=n;i++){
    printf("enter the 1st  :");
        scanf("%d",&(*p));
        p++;
}
for(int i=1;i<=n;i++){
        printf("%d",(*t));
        t++;
}
    return 0;
}