#include<stdio.h>
#include<limits.h> 
void p(int arr[],int a, int b){
    for(int i=a,j=b;i<j;i++,j--){
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }
}

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
p(arr,0,n-1);
p(arr,0,m-1);
p(arr,m,n-1);
for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
 
 return 0;
 } 