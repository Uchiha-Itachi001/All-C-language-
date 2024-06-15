#include<stdio.h>
void matrix(int *p,int a,int b,char c);
void add (int *ptr,int *ppt,int n,int  m);
int main()
{
    int p,q,n,m,arr[10][10],brr[10][10];
    
    printf("enter the 1st matrix row and coullam : ");
    scanf("%d%d",&p,&q);
    int *ptr = &arr[0][0];
    //INPUT 1ST MATRIX
    matrix(ptr,p,q,'a');
    
    printf("enter the 2nd matrix row and coullam : ");
    scanf("%d%d",&n,&m);
    int *ppt = &brr[0][0];
    //INPUT 2ND MATRIX
         matrix(ppt,n,m,'b');
    if(n==p && m==q){
    // ADD TWO MATRIX 
        add(ptr,ppt,p,q);
    }
    else{ printf("wrong information");}

    return 0;
}
void matrix(int *p,int a,int b,char c){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%crr[%d][%d] : ",c,a,b);
            scanf("%d",p+b*j+i);
        }
    }
}
void add(int *ptr,int *ppt,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            printf("%d ",*(ptr+m*j+i)+ *(ppt+m*j+i));
        }   
        printf("\n");
     }
}