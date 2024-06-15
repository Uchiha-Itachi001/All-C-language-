#include<stdio.h>
#include<limits.h> 

int main(){
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int m;
    printf("enter the number : ");
    scanf("%d",&m);
    int arr[n];   
     for(int i=0;i<n;i++){
           printf("enter the %d number : ",i+1);
           scanf("%d",&arr[i]);}
           printf("the original array\n");
   for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);}
        printf("\n");

 for(int i=0;i<n/2;i++){
        int t=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-1-i]=t;}

 for(int i=0;i<m/2;i++){
        int t=arr[i];
        arr[i]=arr[m-i-1];
        arr[m-1-i]=t;}

  for(int i=m ,j=n-1;i<j;i++,j--){
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;}

printf("\nafter transforming \n");

for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
 
 return 0;
 } 