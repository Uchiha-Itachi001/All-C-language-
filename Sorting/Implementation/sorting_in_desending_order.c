/*............SORTING IN DESENDING ORDER USING IMPLITATION METHORD..........*/

#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
/*................TAKE ALL THE ARRAY'S VALU............... */
    int arr[n];
    for(int i=0;i<n;i++){
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
/*.................SORTING [IMPLITATION METHORD]...............*/
for(int i=1;i<n;i++){
    for(int j=i;arr[j]>arr[j-1] && j>0;j--){
        int temp = arr[j];
        arr[j]=arr[j-1];
        arr[j-1]= temp;
    }
}
/*.............PRINTING THE ARRAY AFTER SORTING IN DESENDING IORDER.............*/
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
    return 0;
}