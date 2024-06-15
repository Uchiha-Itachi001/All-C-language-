#include<stdio.h>
int main(){
    int n,m;
    printf("enter the row number :  ");
    scanf("%d",&n);
     printf("enter the colum number :  ");
    scanf("%d",&m);
int arr[10][10];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        printf("enter the %d rows %d element : ",i,j);
        scanf("%d",&arr[i][j]);
        }
}
    int a,b;
    printf("enter the row number :  ");
    scanf("%d",&a);
     printf("enter the colum number :  ");
    scanf("%d",&b);
int brr[10][10];

for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        printf("enter the %d rows %d element : ",i,j);
        scanf("%d",&brr[i][j]);
        }
}

if(m!=a)printf("the matrix is not multiplied");
else{int a[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<b;j++){
            a[i][j]=0;
            for(int k=0;k<m;k++){
                    a[i][j]+=arr[i][k]*brr[k][j];}}}

        for(int i=0;i<n;i++){
    for(int j=0;j<b;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");}}
    return 0;
}