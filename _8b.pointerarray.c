#include <stdio.h>
int main()
{
    int a[50];
    int n,i;
    int *p=a;    
    printf("Enter Number of elements");
    scanf("%d",&n);
    printf("Enter Array elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i)); 
    }
    printf("Array elements are\n");
    for(i=0;i<n;i++)
    {
      printf("%d\t",*(p+i));
    }
  }
