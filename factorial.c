/*Program to find the factorial of a number using recursive and non recursive functions */
//Author: Akarsh A S
//Roll no: 309
//Date: 3/09/21
//Experiment No: 6
#include <stdio.h>
double fact(int n)									//Recursive funtion for finding factorial 
{
     if (n!=1)
          return (n*fact(n-1));
     else
          return n;
}
double lfact(int x)									// Non recursive funtion for finding factorial 
{
     double f=1;
     int i;
     for (i=1;i<=x;i++)
          f = f*i;
     return f;
}
int main()
{
     int n;
     printf("Enter the number : ");
     scanf("%d",&n);
     printf("Factorial of %d by recursive function = \t %0.1f \n",n,fact(n));		// Passing value of n to both recursive and non- recursive funtion
     printf("Factorial of %d by non recursive function =  %0.1f ",n,lfact(n));
     return 0;
}