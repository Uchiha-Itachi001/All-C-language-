#include<stdio.h>

int main(){
    /*.............TAKING INPUT FOR 1ST MATRIX..........*/
    int n,m;
    printf("enter the row and the colum of 1st matrix : ");
    scanf("%d%d",&n,&m);
    int arr[n][m];
    /*.............TAKING INPUT FOR 2ND MATRIX...........*/
    int a,b;
    printf("enter the row and the colum of 2nd matrix  : ");
    scanf("%d%d",&a,&b);
    int brr[a][b];

/*..............CHAKING Metrics are multipliable or not ............*/
 while(m!=a){ 
       printf("the matrixs are not multipliable \n change the 2nd matrix row and colum valus\n");
    printf("\n");
         printf("enter the row and the colum of 2nd matrix  : \n");
    scanf("%d%d",&a,&b);
    }


/*................RADY TO PERFORM MULTIPLAY...............*/
if(m==a){
    /*...............Taking first metrics all values..........*/
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("1st matrix arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    /*.............Taking second metrics all value.......*/
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("2nd matrix brr[%d][%d] : ",i,j);
            scanf("%d",&brr[i][j]);
        }
    }
/*...............Performing multiplication on those matrix...........*/
int r[n][b];
for(int i=0;i<n;i++){
    for(int j=0;j<b;j++){
        r[i][j]=0;
        for(int k=0;k<m;k++){

            
            r[i][j]+=arr[i][k]*brr[k][j];
        }
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<b;j++){
        printf("%d ",r[i][j]);
    }
    printf("\n");
}
}
    return 0;
}