#include<stdio.h>
int main(){
    int a;
    printf("enter the size of the array : ");
    scanf("%d",&a);
    int n[a];
    for(int i=0;i<a;i++){
        printf("enter the %d number : ",i+1);
        scanf("%d",&n[i]);
         }
         int p=0;
     for(int i=0;i<a/2;i++){
        
     if(n[i]==n[a-i-1])
     p++;
     }
if(a/2==p)printf("the array is a palindrom");
else printf("the array is not a palindrom");
    
    

    return 0;
}