/*.............SORTING THE ARRAY USING IMPLITATION METHORD..........*/
#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
/*.............INPUT THE ARRAY'S ALL VALU'S..............*/
    for(int i=0;i<n;i++){
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
/*.............SORTING THE ARRAY[IMPLITATION MATHORD].................*/
for(int i=1;i<n;i++){
    int j=i;
    while(j>=1&&arr[j]<arr[j-1]){
        int temp =arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
        j--;
    }
}
/*...............PRINT THE ARRAY................*/
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
    return 0;
}