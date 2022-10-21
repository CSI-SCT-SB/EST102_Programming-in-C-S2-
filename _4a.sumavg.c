#include<stdio.h>
int main() 
{
    int number[100];
    int n,num;
    float s=0,avg=0;
    printf("Enter number of values to be inputted \n");
    scanf("%d",&num);
    printf("Enter the numbers \n");
    for (n=1;n<=num;n++)
    { 
       scanf("%d",&number[n]);
    }
    for(n=1;n<=num;n++)
    {  
       s=s+number[n];
    }
    printf("sum=%f \n",s);
    avg=s/num;
    printf("average=%f \n",avg);
    
return(0);
}
