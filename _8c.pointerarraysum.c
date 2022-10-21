#include <stdio.h>
int sumofarray(int *p,int n)
{
 int i;
 int sum=0;
for(i=0;i<n;i++)
    {
     sum=sum+*(p+i);
    }
 return sum;
}
int main()
{
    int num,j;
    int array[50];
    int *q=array;    
    printf("Enter Number of elements");
    scanf("%d",&num);
    printf("Enter Array elements \n");
    for(j=0;j<num;j++)
    {
        scanf("%d",(q+j)); 
    }
    int sum;
    sum=sumofarray(array,num);
    printf("Sum of ARRAY elements= %d \n",sum);
    return 0;
}
