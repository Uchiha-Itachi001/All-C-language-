/*.......SORTING THE ARRAY USING SELECTION METHORD.......*/

#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
int arr[n];
/*..........INPUT THE ARRAY'S ALL VALUE.......*/
for(int i=0;i<n;i++){
    printf("arr[%d] : ",i);
    scanf("%d",&arr[i]);
}

/*............SORTING IN DESENDING ORDER............*/

for(int i=0;i<n-1;i++){
    int max = INT_MIN;
    int maxidx = -1;
    for(int j=i;j<n;j++){
        if(max<arr[j]){
            max=arr[j];
            maxidx=j;
        }
    }
    int temp= arr[i];
    arr[i]=arr[maxidx];
    arr[maxidx]=temp;
}
/*.............PRINT THE ARRAY[AFTER SORTING THE ARRAY IN DESENDING ORDER].........*/
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
    return 0;
}