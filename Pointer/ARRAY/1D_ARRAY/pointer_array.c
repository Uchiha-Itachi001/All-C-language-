#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int arr[n];
    int *ptr = &arr[0];
    for(int i=0;i<n;i++){
        printf("arr[%d] : ",i);
        scanf("%d",ptr+i);

    }
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    
    return 0;
}