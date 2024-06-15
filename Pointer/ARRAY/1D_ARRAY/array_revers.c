#include<stdio.h>
int main(){
    int n,arr[10];
    printf("enter the number : ");
    scanf("%d",&n);
    int *ptr = &arr[0];
    
    for(int i=0;i<n;i++){
        printf("arr[%d] : ",i);
        scanf("%d",(ptr+i));
    }

    for(int i = 0;i<n/2;i++){
        int t = *(ptr+i);
        *(ptr+i) = *(ptr+n-1-i);
        *(ptr+n-1-i) = t;
    }

    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }

    return 0;
}