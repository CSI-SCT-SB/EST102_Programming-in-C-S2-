#include <stdio.h>
#include <string.h>
int main()
{
   char s[100];
   printf("Enter a string:");
   gets(s); 
   strrev(s); 
   printf("The reverse of the string: %s\n", s);
   return 0;
}