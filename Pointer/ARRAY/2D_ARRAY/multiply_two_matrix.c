#include<stdio.h>

void matrix(int *pt,int a,int b,int p);
void mult(int *p,int *q,int *r,int a,int b,int l);

int main()
{
    int n,m,a,b,m1[10][10],m2[10][10];
    printf("enter the 1st matrix row and collum : ");
    scanf("%d%d",&n,&m);
    
    int *ptr = &m1[0][0];
    matrix(ptr,n,m,1);

    printf("enter the 2st matrix row and collum : ");
    scanf("%d%d",&a,&b);
    
    int *qtr = &m2[0][0];
if(n==a && m==b){
    matrix(qtr,a,b,2);
    
    int res[10][10];
    int *ctr = &res[0][0];
    
    mult(ptr,qtr,ctr,n,b,a);
    for(int i=0;i<n;i++){
        for(int j=0;j<b;j++){
            printf("%d ",*(ctr+b*j+i));
        }
    }printf("\n");
    }
    else printf("invalid input");
    return 0;
}

void matrix(int *pt,int a,int b,int p){
    for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                printf("m%d[%d][%d] : ",p,i,j);
                scanf("%d",(pt+b*j+i));
            }
    }
}
void mult(int *p,int *q,int *r,int a,int b,int l){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            *(r+b*j+i)=0;
            for(int k=0;k<l;k++){
                *(r+b*j+i)+=*(p+b*k+i) * *(q+b*j+k);
            }
        }
    }

}