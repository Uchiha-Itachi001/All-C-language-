#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the new  size of array : ");
    scanf("%d",&n);

    int *ptr = (int*)calloc(5,sizeof(int));
    ptr = realloc(ptr,n*sizeof(int));
    int *r = ptr;
    for(int i=0;i<n;i++) {
        printf("arr[%d]: ",i);
        scanf("%d",&(*ptr));
        ptr++;
    }
    for(int i=0;i<n;i++){
        printf("%d ",(*r));
        r++;
    }

    return 0;
}