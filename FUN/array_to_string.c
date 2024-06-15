#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    char str[n];
    for(int i=0;i<n;i++){
        str[i] = arr[i];
    }
    puts(str);
    return 0;
}