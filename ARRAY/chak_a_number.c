 #include<stdio.h>
 int main(){
    int n,m;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    printf("enter the number  : ");
    scanf("%d",&m);
int arr[n];
for(int i=0;i<n;i++){
    printf("enter thye %d number  : ",i+1);
    scanf("%d",&arr[i]);
}int s=0;
for(int i=0;i<n;i++){
    if(m==arr[i]){printf("%d is presend in the array",m);break;}
    else {s++;}
}
if(s==n)printf("%d is not presend",m);
    return 0;
 }