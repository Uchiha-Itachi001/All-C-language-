#include<stdio.h>

/*.....REMAMBER THAT THE STRUCTUR ALLWAS PASS THE VALU NOT RAFATANCE ..........*/

typedef struct {
    int a;
    int b;
}number;

void pan(number *n){
    int t = n->a;
    n->a = n->b;
    n->b = t;
}

int main()
{number p;
    printf("1st  : ");
    scanf("%d",&p.a);
    printf("2st  : ");
    scanf("%d",&p.b);
    
    pan(&p);
 printf(" a = %d , b = %d",p.a,p.b)   ;


    return 0;
}