#include<stdio.h>
int main (){
    
    do{int n,m;
        printf("enter the 1st number : ");
        scanf("%d",&n);
        printf("enter the 2st number : ");
        scanf("%d",&m);
        char a;
        printf("enter the oparation[@=turn off] : ");
        scanf("%c",&a);
        scanf("%c",&a);
        if(a=='@'){printf("Turn off");
        break;}
        switch(a){
            case '+':printf("%d\n",n+m);
                        break;
            case '-':printf("%d\n",n-m);
                        break;
            case '*':printf("%d\n",n*m);
                        break;
            case '/':if(m==0){printf("undefine\n");
                                break;}
            
                    else {printf("%d\n",n/10);
                        break;}
   }
  }
    while(1);

    return 0;
}