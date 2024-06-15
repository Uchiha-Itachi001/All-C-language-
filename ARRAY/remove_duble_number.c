#include<stdio.h>
int main()
{int n;
printf("enter the n: ");
scanf("%d",&n);
    
    
    
int arr[n];
for(int i=0;i<n;i++){
    printf("enter the %d number : ",i+1);
    scanf("%d",&arr[i]);}
for(int i=0; i<n; i++)
    {   for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j; k<n; k++)
                    arr[k]=arr[k+1];
                n--;
                j--;
            }
        }
    }
    printf("\nAfter remove all duplicates number...the all numbers are:-\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}