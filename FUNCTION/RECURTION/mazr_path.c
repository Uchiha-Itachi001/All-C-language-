#include<stdio.h>

int maze(int n,int m);

int main()
{
    int n,m;
    printf("enter the row : ");
    scanf("%d",&n);
    
    printf("enter the collum : ");
    scanf("%d",&m);
    
    printf("The way to solve the maze is : %d",maze(n,m));


    return 0;
}

int maze(int n,int m){
    int rw = 0,dw = 0;

    if(n==1 && m==1) return 1;
    else if(n==1){
        rw+=maze(n,m-1);
    }
    else if(m==1){
        dw+=maze(n-1,m);
    }
    else if(n>1 && m>1){
        dw+=maze(n-1,m);
        rw+=maze(n,m-1);
    }

    return rw + dw;

}