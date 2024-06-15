#include<stdio.h>
int main(){
int n,m;
printf("enter the row number :");
scanf("%d",&n);
printf("enter the colum number : ");
scanf("%d",&m);
int arr[n][m],sum=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        printf("enter the %d rows %d element : ",i,j);
        scanf("%d",&arr[i][j]);
    }
}
printf("\n");
int x,y,a,b;
printf("enter the 1st point : ");
scanf("%d%d",&x,&y);
printf("enter the 2nd point : ");
scanf("%d%d",&a,&b);
for(int i=x;i<=a;i++){
    for(int j=y;j<=b;j++){
        sum+=arr[i][j];
    }
}
printf("the sum is : %d",sum);

    return 0;
}