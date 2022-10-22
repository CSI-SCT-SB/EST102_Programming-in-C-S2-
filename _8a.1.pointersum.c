#include <stdio.h>
int main()
    {
       int a,b,*c,*d,sum;
       printf("Enter two Numbers");
       scanf("%d%d", &a,&b);
       c=&a;
       d=&b;
       sum=*c+*d;
       printf("Sum= %d ", sum);
       return 0;
     }
