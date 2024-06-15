#include<stdio.h>
int main(){
    int n,m;
    printf("enter the the row and colum : ");
    scanf("%d%d",&n,&m);
    int arr[n][m];
    int *ptr = &arr[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("arrp[%d][%d] : ",i,j);
        
            scanf("%d",ptr+m*i+j);
        }
    }
    int a,b;
    printf("enter the the row and colum : ");
    scanf("%d%d",&a,&b);
    int brr[a][b];
    int *qtr = &brr[0][0];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("brr[%d][%d] : ",i,j);
        
            scanf("%d",qtr+m*i+j);
        }
    }

    int crr[n][b];
    int *rtr = &crr[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<b;j++){
            *(rtr+b*i+j)=0;
            for(int k=0;k<b;k++){
                *(rtr+b*i+j)+=*(ptr+i*m+k)+ *(qtr+k*b+j);
                            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<b;j++){
            printf("%d",*(rtr+b*i+j));
        }
        printf("\n");
    }


    return 0;
}