/*............FINDOUT THE K'th SMALLEST NUMBER..............*/

#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
  
/*................TAKING ALL THE  ARRAY'S ALL ELEMENT'S VALUE..............*/

  int arr[n];
for(int i=0;i<n;i++){
    printf("arr[%d] : ",i);
    scanf("%d",&arr[i]);
}

/*............INPUT THE K'th VAlU..............*/

int k ;
printf("enter the number which you are want : ");
scanf("%d",&k);

/*.................USING SELECTION SORT METHORD FIND THE K'th SMALLEST ELEMENT...........*/

for(int i=0;i<k;i++){
    int min= INT_MAX;
    int minidx = -1;
    for(int j=i;j<=n-1;j++){
        if(arr[j]<min){
            min=arr[j];
            minidx=j;
        }
    }
    
    int temp = arr[i];
            arr[i]=arr[minidx];
            arr[minidx]=temp;

}
printf( "%d smallest number is : %d  ",k,arr[k-1]);

    return 0;
}