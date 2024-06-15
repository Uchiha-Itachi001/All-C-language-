#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the %d number : ",i+1);
        scanf("%d",&arr[i]);
    }
    int p=0;
    int a,b;
    printf("enter the 1st number : ");
    scanf("%d",&a);
    printf("enter the 2nd number : ");
    scanf("%d",&b);
    for(int i=a,j=b;i<j;i++,j--){
         int t=arr[i];
         arr[i]=arr[j];
         arr[j]=t;       
    }
    
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}