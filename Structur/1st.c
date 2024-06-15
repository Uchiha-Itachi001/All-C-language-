#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        int age;
        char name[100];
        int no_tastmatch;
        int average_run;}
crickter;
cricketer arr[2];
arr[0].age=29;
arr[0].no_tastmatch=47;
arr[0].average_run=50;
strcpy(arr[0].name,"virat");
arr[1].age=48;
arr[1].no_tastmatch=77;
arr[1].average_run=57;
strcpy(arr[1].name,"dhoni");
for(int i=0;i<2;i++){
    printf("%s\n",arr[i].name);
    printf("%d\n",arr[i].age);
    printf("%d\n",arr[i].no_tastmatch);
    printf("%d\n",arr[i].average_run);
}
    return 0;
}