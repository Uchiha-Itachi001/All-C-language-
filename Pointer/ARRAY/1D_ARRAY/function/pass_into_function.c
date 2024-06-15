#include<stdio.h>

void array(int *ptr,int n){
    for(int i=0;i<n;i++){
        printf("arr[%d] : ",i);
        scanf("%d",ptr+i);
    }
}
int main()
{
    int n,arr[10];
    int *ptr = &arr[0];
    printf("entert the array size : ");
    scanf("%d",&n);
    array(ptr,n);
    
 for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    return 0;
}