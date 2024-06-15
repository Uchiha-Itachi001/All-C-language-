#include<stdio.h>

void func (int arr[],int n ){
     for(int i=0;i<n;i++){
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
}
int main()
{
    int n,arr[10];
    printf("enter the size of the array : ");
    scanf("%d",&n);

    func(arr,n);

     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}