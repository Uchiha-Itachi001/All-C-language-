#include<stdio.h>
int main(){
  
  
  int n;
  printf("ENTER THE NUMBER : ");
  scanf("%d",&n);
   int nsp = n-1;


for(int i=0;i<=n;i++){
   
    for(int j=0;j<=nsp;j++){
          printf(" ");
      }

  int c=1;

    for(int k=0;k<=i;k++){
            if(i==0 || k==0){
                    printf("1 ");
            }
            else{
                c = c*(i-k+1)/k;
                    printf("%d ",c);
            }
       }
    nsp--;
    printf("\n");
}

  return 0;
}