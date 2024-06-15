#include<stdio.h>
void name(FILE *ptr,int i){
     
        int pri;
        char str[100];
        printf("enter the item name : ");
        gets(str);
        fprintf(ptr,"(%d) Product name : %s   ",i+1,str);
} 
void rs(FILE *ptr){
    int pri;
        printf("enter the price of the item : ");
        scanf("%d",&pri);
       fprintf(ptr," : RS : %d \n",pri);
}
int main(){
    FILE *ptr;
    ptr = fopen("main.txt","w");
    int n;
    printf("enter the total number's of items : ");
    scanf("%d",&n);
 for(int i=0;i<n;i++){
    rs(ptr);  name(ptr,i);

 }
        
    return 0;
}