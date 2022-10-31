#include<stdio.h>
int main()
{
  int n,i,j,swap; //Variable Declaration
  printf("Enter number of integers:\n");
  scanf("%d",&n);
  int num[n];
  printf("Enter %d numbers:\n",n);
  for(i=0;i<n;i++) //Storing in Array
  {
    scanf("%d",&num[i]);
  }
  for(i=n-1;i>0;i--) //Bubble Sort
  {
    for(j=0;j<=i;j++)
    {
     if(num[j]>num[j+1])
     {
	swap=num[j];
	num[j]=num[j+1];
	num[j+1]=swap;
     }
    }
  }
  printf("Sorted array:\n");
  for(i=0;i<n;i++)
  {
    printf("%d ",num[i]);
  }
 return(0);
}