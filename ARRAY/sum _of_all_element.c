#include<stdio.h>
int main()
{int n;
    printf("enter the size : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter the %d number : ",i+1);
        scanf("%d",&a[i]);
        }
    int s=0;
      for(int i=0;i<n;i++){
        s=s+a[i];}
        printf("%d",s);
    
    
 return 0;}