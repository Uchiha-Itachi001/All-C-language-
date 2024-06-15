/*..........SHORT THE ARRAY IN DESENDING ORDER..............*/

/*ARR[5] = {1,2,3,4,5};
        .....AFTER SORTING IN DESENDING ORDER......
        ARR[5] = {5,4,3,2,1};
*/
#include<stdio.h>
#include<stdbool.h>

int main(){
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
int arr[n];

/*...........INPUT THE ARRAY............*/

for(int i=0;i<n;i++){
    printf("arr[%d] : ",i);
    scanf("%d",&arr[i]);
}

/*.........SORTING THE ARRY IN DESENDING ORDER.............*/

for(int i=0;i<n;i++){
    bool flag = true;
     for(int j=0;j<n-1-i;j++){
        if(arr[j]<arr[j+1]){
            int temp= arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag = false;
        }
     }
    if(flag==true)break;
}
/*.........PRINT THE ARRAY[AFTER SORTING IT IN DESENDING ORDER]..........*/
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}