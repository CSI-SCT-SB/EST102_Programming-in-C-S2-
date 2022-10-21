#include<stdio.h> 
int main()
{
      int numbers[100],a,b,n,num2;
      printf("Enter number of values to be inputted \n");
      scanf("%d",&n);
      printf("Enter the numbers\n"); 
      for(a=1;a<=n;a++)
      {
      scanf("%d",&numbers[a]);
      }
      for(b=1;b<=n; b++)
      {
         for(a=1;a<=n-b;a++)
         {
             if(numbers[a]>numbers[a+1])
             {
                  num2=numbers[a]; 
                  numbers[a]=numbers[a+1];
                  numbers[a+1]=num2;

              }

          }

       }
       printf("Array elements after sorting\n"); 
       for(a=1;a<=n;a++)
       {
           printf("%d \n",numbers[a]);
       }
return(0);
}
