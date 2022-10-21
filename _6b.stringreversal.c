#include<stdio.h>
void reverse(char [10]);
int main()
{char str[10];
 printf("enter str");
 scanf("%s",str);
 reverse(str);
 return 0;
}
void reverse(char x[10])
{
 char rev[10];
 int i,j,c=0;
 while( x[c]!='\0')
{
 c++;
}
j=c-1;
for(i=0;i<c;i++)
{
 rev[i]=x[j];
 j--;
}
printf("reversed string %s",rev);
}
