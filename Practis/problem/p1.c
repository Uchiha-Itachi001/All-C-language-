#include<stdio.h>
int main()
{
    do{
    int n,m;
    char c[3];
    printf("enter the 1st number : ");
    scanf("%d",&n);
    
    printf("enter the 2nd number : ");
    scanf("%d",&m);
    printf("enter the operation (write off for turn off) : ");
    scanf("%s",c); //if i use  gets(c); its wont work why i dont know
    if(c[0]=='o'||c[0]=='O'&&c[1]=='f'||c[1]=='F'&&c[2]=='f'||c[2]=='F'){ printf("turn off");break;}
    
    else {switch (c[0])
    {
    case '+': printf("%d + %d = %d\n",n,m,m+n);
        break;
    case '-': printf("%d - %d = %d\n",n,m,(n-m));
        break;
    case '*': printf("%d * %d = %d\n",n,m,n*m);
        break;
    case '/': if(m==0)printf("math error\n");
              else{printf("%d / %d = %d\n",n,m,n/m);}
        break;
    
    default: printf("wrong operation\n");
        break;
    }
    }
    }
    while(1);
    return 0;
}