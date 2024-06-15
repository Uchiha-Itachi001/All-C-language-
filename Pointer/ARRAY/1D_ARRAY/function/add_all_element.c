#include<stdio.h>

int  add(int *ptr,int n,int m);

int main()
{
    int n,m,arr[10][10];
    int *ptr = &arr[0][0];
    printf("enter the 1st matrix row and collum : ");
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("arr[%d][%d] : ",i,j);
            scanf("%d",ptr+m*j+i);
        }
    }
printf("The sum of all element is : %d",add(ptr,n,m));

    return 0;
}
int  add(int *ptr,int n,int m){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=*(ptr+m*j+i);
        }
    }
    return sum;
}