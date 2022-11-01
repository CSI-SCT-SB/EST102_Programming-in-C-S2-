#include<stdio.h>
void swap(int *, int *);
void main()
[
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("\nAfter swapping \na=%d \n b=%d",a,b);
]
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}