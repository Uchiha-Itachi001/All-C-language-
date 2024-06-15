#include<stdio.h>
void reverse(int *ptr,int a,int b){
    for(int i=a,j=b;i<j;j--,i++){
        int t = *(ptr+i);
        *(ptr+i) = *(ptr+j);
        *(ptr+j) = t;

    }
}
int main()
{
    int arr[10],n,k;
    printf("enter the array size : ");
    scanf("%d",&n);
    int *ptr = &arr[0];
    for(int i=0;i<n;i++){
        printf("arr[%d] : ",i);
        scanf("%d",ptr+i);
    }
    printf("enter the number : ");
    scanf("%d",&k);
    reverse(ptr,0,n-1);
    reverse(ptr,0,k-1);
    reverse(ptr,k,n-1);
for(int i=0;i<n;i++){
    printf("%d ",*(ptr+i));
}
    return 0;
}
