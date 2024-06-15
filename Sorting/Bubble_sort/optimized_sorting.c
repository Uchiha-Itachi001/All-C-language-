/*..........SHORT THE ARRAY..............*/

#include<stdio.h>
#include<stdbool.h>

int main(){
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
int arr[n];
/*input the array*/
for(int i=0;i<n;i++){
    printf("arr[%d] : ",i);
    scanf("%d",&arr[i]);
}
/*soting the array*/
for(int i=0;i<n;i++){
    bool flag = true;
     for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            int temp= arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag = false;
        }
     }
    if(flag==true)break;
}
/*after sorting the array */
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}