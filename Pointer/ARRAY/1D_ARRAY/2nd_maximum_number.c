#include<stdio.h>
#include<limits.h>
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

    int max = arr[0],idx;
    for(int i = 0 ;i<n ;i++){
        if(*(ptr+i)>max){
            max = *(ptr+i);
            idx = i;
        }
    }

    int smax = INT_MIN;

    for(int i= 0;i<n;i++){
        if(smax<*(ptr+i) && *(ptr+i)!=max)
            smax = *(ptr+i);
    }
    
printf("The maximum number is : %d",smax);


    return 0;
}