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
}int max=INT_MIN, p=0;
for(int i=0;i<n;i++){
    int c=0;
        for(int j=0;j<m;j++){
            if(arr[i][j]==1){c++;}}
    if(c>max){
        max=c;
        p=i;}
    }
    printf("%d row has the maximum 1s\n",p);
    printf("and the number of 1s in this row is : %d",max);
    return 0;
}