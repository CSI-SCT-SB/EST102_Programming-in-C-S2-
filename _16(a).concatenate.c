#include<stdio.h>

int main()
{
     int i=0,j=0;
     char str1[10],str2[10];
     
     
     printf("Enter the first string\n");
     scanf("%s",str1);
     
     printf("Enter the second string\n");
     scanf("%s",str2);
     
    for(i=0;str1[i]!='\0';i++);
    while(str2[j]!='\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
     
     printf("The concatenated string is\n");
     puts(str1);
    return 0; 
}