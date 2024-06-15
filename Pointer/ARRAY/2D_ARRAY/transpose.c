#include<stdio.h>
int main()
{
    int n,m,arr[10][10];
    printf("enter the number : ");
    scanf("%d%d",&n,&m);
    int *ptr = &arr[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("arr[%d][%d] : ",i,j);
            scanf("%d",ptr+m*j+i);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            int t = *(ptr+m*j+i);
            *(ptr+m*j+i) = *(ptr+m*i+j);
            *(ptr+m*i+j) = t;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",*(ptr+n*j+i));
        }
        printf("\n");
    }
    return 0;
}