#include<stdio.h>
//it is not work for 9,8,7,6,5,4,3,2,1...nth

int main()
{int n;
    printf("enter the size : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter the %d number : ",i+1);
        scanf("%d",&a[i]);
        }
        int max=a[0];
    int s=0;
      for(int i=0;i<n;i++){
        if(max<a[i])max=a[i];}
    
        int smax=a[0];
         for(int i=0;i<n;i++){
         if(smax<a[i] && max!=a[i])
         smax=a[i];
         }
        printf("%d",smax);
    
 return 0;}