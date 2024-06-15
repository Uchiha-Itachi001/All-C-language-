#include<stdio.h>
#include<limits.h>
int main(){
int n,m;
printf("enter the row number : ");
scanf("%d",&n);
printf("enter the columb number : ");
scanf("%d",&m);
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        printf("enter the %d rows %d columb : ",i,j);
        scanf("%d",&arr[i][j]);
        }
}int max=INT_MIN,p=0;
for(int i=0;i<n;i++){
    int sum =0;
        for(int j=0;j<m;j++){
            sum=sum+arr[i][j];}
    if(sum>max){
        max=sum;
        p=i;}
    }
    printf("the maximum sum of the row is: %d\n",p);
    printf("and the maximum sum of this row is : %d",max);
    return 0;
}