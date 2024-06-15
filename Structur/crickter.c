#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        int age;
        char name[100];
        int no_tastmatch;
        float average_run;}
crickter;
crickter arr[3];
for(int i=0;i<3;i++){
    scanf("%s\n",arr[i].name);
    scanf("%d\n",&arr[i].age);
    scanf("%f\n",&arr[i].average_run);
    scanf("%d\n",&arr[i].no_tastmatch);
}

for(int i=0;i<3;i++){
printf("name :%s\n",arr[i].name);
printf("age : %d\n",arr[i].age);    

printf("no of match : %d\n",arr[i].no_tastmatch);
printf("avagesg :%f\n",arr[i].average_run);}
return 0;}