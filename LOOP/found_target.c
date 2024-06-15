#include<stdio.h>
#include<string.h>

int main(){

    int arr[5]={1,2,3,4,5};
    int i=0,j=4;
   
   int target;
   printf("enter tyhe target number : ");
   scanf("%d",&target);
    while(i<j){
        if(arr[i]+arr[j]==target){
            printf("%d + %d = %d",arr[i],arr[j],target);
            break;
        }
        else if(arr[i]+arr[j]>target){
            j--;
        }
        else if(arr[i]+arr[j]<target){
            i++;
        }
    }
    return 0;
}