#include <stdio.h>
void swap(int *c, int *d)
{
    int s=*c;
    *c=*d;
    *d=s;
}



int main()
{
    int a,b;
    printf("Value of a \n");
    scanf("%d", &a);
    printf("Value of b \n");
    scanf("%d", &b);
    swap(&a,&b);
    printf("\n Swapped Values \n a= %d  b= %d",a,b);
    return 0;
}
