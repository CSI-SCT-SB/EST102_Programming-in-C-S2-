#include <stdio.h>
#include<string.h>
int main()
{
  char string[100];
    int a,l;
    int flag=0;
    
    printf("Enter the word \n");
    scanf("%s", string);
    
    l= strlen(string);
    
    for(a=0;a<l;a++){
        if(string[a] != string[l-a-1])
          {
            flag++;
            break;
          }   }
    
    if (flag!=0) 
      {
        printf("%s is not a palindrome", string);
      }    
    else 
      {
        printf("%s is a palindrome", string);
       }
return 0;
}
