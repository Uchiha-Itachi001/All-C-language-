#include<stdio.h>

void duplicat(int *ptr,int a);

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int arr[10];
    int *ptr = &arr[0];
    for(int i=0;i<n;i++){
        printf("arr[%d] : ",i);
        scanf("%d",ptr+i);
    }
    printf("the duplicate element's are : \n");
    duplicat(ptr,n);

    return 0;
}

void duplicat(int *ptr,int a){
    
    for(int i=0;i<a;i++){
       int c =0 ;
       for(int j=i+1;j<a;j++){
        if(*(ptr+i)==*(ptr+j)){
            printf("%d ",*(ptr+i));
             }
        }
    }
}
