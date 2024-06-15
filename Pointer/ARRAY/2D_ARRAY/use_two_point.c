#include<stdio.h>

int  add(int *ptr,int a,int b,int p,int q){
int sum=0;
for(int i=a;i<=p;i++){
    for(int j=b;j<=q;j++){
        sum+=*(ptr+(q+1)*j+i);
    }
}
return sum;
}
int main()
{
    int n,m,arr[10][10];
    printf("enter the row and collum : ");
    scanf("%d%d",&n,&m);
   int *ptr = &arr[0][0];
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        printf("arr[%d][%d] : ",i,j);
        scanf("%d",(ptr+m*j+i));
    }
   }
    int a,b,p,q;
    printf("enter the 1st point : ");
    scanf("%d%d",&a,&b);
    printf("enter the 2nd point : ");
    scanf("%d%d",&p,&q);
    printf("the addition is : %d", add(ptr,a,b,p,q));


    return 0;
}