#include<stdio.h>
int main()
{
    int n,arr[10];
    int *ptr = &arr[0];
    printf("entert the array size : ");
    scanf("%d",&n);
    for(int i = 0 ;i < n;i++){
        printf("arr[%d] : ",i);
        scanf("%d",ptr+i);
    }

    int max = arr[0];
    for(int i = 0 ;i<n ;i++){
        if(*(ptr+i)>max){
            max = *(ptr+i);
        }
    }
    
printf("The maximum number is : %d",max);

    return 0;
}