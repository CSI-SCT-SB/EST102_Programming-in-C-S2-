#include<stdio.h>
int main()
{
  printf("Enter a string\n");
  char string1[100];
  scanf("%s",&string1);
  printf("Enter a string \n");
  char string2[100];
  scanf("%s",&string2);
  char string3[100];
  int n1=0,n2=0,a,b=0;
  for(a=0;string1[a]!='\0';a++)
  {
 n1=n1+1;
       string3[a]=string1[a];
  }
  for(a=0;string2[a] !='\0';a++)
  {
 n2=n2+1;
  }
  int n=n1+n2;
  for(a=n1;a<n;a++)
  {
 string3[a]=string2[b];
 b++;
  }
  string3[a]='\0';
  printf("Concatanted String:\n%s",string3);
 return(0);
}
