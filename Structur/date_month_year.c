#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;

    }date;
    date arr[2];
    for(int i=0;i<2;i++){
    printf("enter the day : ");
scanf("%d",&arr[i].day);        
    printf("enter the month : ");
scanf("%d",&arr[i].month );
    printf("enter the year : ");
scanf("%d",&arr[i].year);
    }
for(int i=0;i<2;i++){
    printf("%d\n",arr[i].day);
    printf("%d\n",arr[i].month);
    printf("%d\n",arr[i].year);

}
int c=0;
    for(int i=0;i<2;i++){
        if(arr[i].day==arr[i+1].day)c++;
        if(arr[i].month==arr[i+1].month)c++;
        if(arr[i].year==arr[i+1].year)c++;     
    }
    if(c!=3)printf("not equal");
    else {printf("equal");}
       
    return 0;
}