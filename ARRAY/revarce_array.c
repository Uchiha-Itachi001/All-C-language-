#include<stdio.h>
int main()
{int n;
printf("enter the size : ");
scanf("%d",&n);
int arr[n];
    
    for(int i=0;i<5;i++){
        printf("enter the %d number : ",i+1);
        scanf("%d",&arr[i]);
         }
    for(int i=0;i<3;i++){
        int t=arr[i];
        arr[i]=arr[5-i-1];
        arr[5-i-1]=t;

    }
for(int i=0;i<5;i++){
    printf("%d\n",arr[i]);
}

    return 0;
}