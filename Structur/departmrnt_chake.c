#include<stdio.h>
#include<string.h>

/*...........CHAKING DEPARTMENT SAME OR NOT.........*/

typedef struct student{
    int roll;
    char name[100];
    char department[100];
    char course[100];
    int year;    
}student;
void check (student n,student p);

int main(){
student arr[2];
for(int i=0;i<2;i++){
    printf("information of %d student :\n",i+1);

    printf("enter the name : ");
    scanf("%s",arr[i].name);

    printf("enter the roll number  : ");
    scanf("%d",&arr[i].roll);

    printf("enter the course : ");
    scanf("%s",arr[i].course);

    printf("enter the department : ");
    scanf("%s",arr[i].department);

    printf("enter the year : ");
    scanf("%d",&arr[i].year);
 }
check(arr[0],arr[1]);


    return 0;
}

void check (student n,student p){
int i=0,c=0,l=0;
while(n.department[i]!='\0'){
    c++;i++;}

  for(int i=0;i<c;i++){
        if(n.department[i]==p.department[i])
        l++;}
    if(l==c)printf("they have same department");
    else printf("they have deffarent department");
}