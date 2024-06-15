#include<stdio.h>

int sum(int *ptr,int a,int m);

int main()
{
    int n,m,arr[10][10];
    printf("enter the row and collum : ");
    scanf("%d%d",&n,&m);
    int *ptr = &arr[0][0];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("arr[%d][%d] : ",i,j);
            scanf("%d",ptr+m*j+i);
        }
    }

    printf("The maximum sum is : %d",sum(ptr,n,m));



    return 0;
}
int sum(int *ptr,int a,int b){
    int max = 0,idx = -1;
    for(int i=0;i<a;i++){
        int sum = 0;
        for(int j=0;j<b;j++){
                sum+= *(ptr+b*j+i);
        }
        if(max<sum){
            max = sum;
            idx = i;
        }
    }
printf("the row number is : %d\n",idx);
    return max;
}