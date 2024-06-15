#include<stdio.h>
int main()
{int n;
    printf("enter the size : ");
    scanf("%d",&n);
    int a[10];
    for(int i=0;i<n;i++){
        printf("enter the %d number : ",i+1);
        scanf("%d",&a[i]);
        }
        int max=a[0];
    int s=0;
      for(int i=0;i<n;i++){
        if(max<a[i])max=a[i];}
        printf("%d",max);
    
    
 return 0;}