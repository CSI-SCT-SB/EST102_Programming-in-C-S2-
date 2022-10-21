#include<stdio.h>
int main()
{
    char str[200];
    int i,v=0,c=0,s=0;
    printf("Enter the string\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' || str[i]=='u' || str[i]=='A' ||str[i]=='E' || str[i]=='I' || str[i]=='O' ||str[i]=='U')
        {
            v=v+1;
        }
        else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
        {
            c=c+1;
        }
 
        else if (str[i]==' ')
        {
            s=s+1;
        }
        
    }
 
    printf("\n Number ofVowels = %d",v);
    printf("\n Number of Consonants = %d",c);
    printf("\n Number of Spaces= %d",s);
}
