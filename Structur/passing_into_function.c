#include<stdio.h>
#include<string.h>

typedef struct info{
    int row;
    int collum;
    int arr[10][10];
}array;

void matrix(array *n,int a);
int chake(array *n,array *m);
void add(array *n ,array *m,array *o);

int main()
{   // 1ST MATRIX INFORMATION
    array m1,m2,m3;
    printf("enter the 1 st matrix row : ");
    scanf("%d",&m1.row);
    printf("enter the 1 st matrix collum : ");
    scanf("%d",&m1.collum);
    matrix(&m1,1);

    //2ND MATRIX INFORMATION
    printf("enter the 2 nd matrix row : ");
    scanf("%d",&m2.row);
    printf("enter the 2 nd matrix collum : ");
    scanf("%d",&m2.collum);
   
    //CONDITION CHAKE
    int p = chake(&m1,&m2);
    if(p==1){ 
        matrix(&m2,2);
        add(&m1,&m2,&m3);

        for(int i=0;i<m1.row;i++){
            for(int j=0;j<m1.collum;j++){
                printf("%d ",m3.arr[i][j]);
            }
        printf("\n");
        }
    }
    else printf("wrong information");

    return 0;
}

void matrix(array *n,int a){    //ALL MATRIX ELEMENT INPUT

    for(int i = 0 ; i < n->row ;i++){
        for(int j = 0 ; j < n->collum ; j++){
            printf("m%d[%d][%d] : ",a,i,j);
            scanf("%d",&n->arr[i][j]);
        }
    }
}

void add(array *n ,array *m,array *o){  //ADD TWO MATRIX
    for(int i=0 ;i< n->row;i++){
        for(int j=0;j<n->collum;j++){
            
       o->arr[i][j] = ( n->arr[i][j] + m->arr[i][j]);
        }
        
    }
}

int chake(array *n,array *m){
        //CONTITION
    if(n->row == m->row && n->collum == m->collum){
        return 1;
    }
    else return 0;

}