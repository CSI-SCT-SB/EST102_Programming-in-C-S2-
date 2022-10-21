#include<stdio.h>
int factorial(int n);
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
int f=factorial(n);
printf("The factorial of %d is %d",n,f);
}
int factorial(int n)
{
 int i;
 int ans=1;
 for(i=n;i>0;i--)
    ans=ans*i;
 return(ans);
}
