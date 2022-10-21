#include<stdio.h>
int main()
{
int i,n,flag;
printf("enter the number");
scanf("%d",&n);
if(n==1) 
 {
   printf("It is neither prime nor composite");
   }
else
flag=0;
for (i=2;i<=n/2;i++)
{
    if (n%i ==0)
    {
        flag=1;
        break;
     }
}
     if(flag==0 && n!=1)
{
      printf(" It is prime");
}
else
{  if (flag==1 && n!=1)
     printf("It is not prime");
}
return 0;
}
