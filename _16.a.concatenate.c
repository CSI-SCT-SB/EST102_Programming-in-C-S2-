#include<stdio.h>
int main()
{
  printf("Enter string1:\n");
  char s1[200];
  gets(s1);
  printf("Enter string2:\n");
  char s2[200];
  gets(s2);
  char s3[400];
  int n1=0,i,j;
  for(i=0;s1[i]!='\0';i++)
  {
	n1++;
	s3[i]=s1[i];
  }
  i=n1;
  for(j=0;s2[j]!='\0';j++)
  {
	s3[i]=s2[j];
	i++;
  }
  s3[i]='\0';
  printf("Concatante String:\n%s",s3);
 return(0);
}