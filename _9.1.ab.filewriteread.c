#include<stdio.h>
int main()
{
    FILE *fptr;
    char c;
    fptr=fopen("test.txt","w");  
    printf("enter data to be read \n");
   while((c=getchar()) != EOF)
    {
        putc(c,fptr);
    }
    fclose(fptr);
    fptr=fopen("test.txt","r");
    printf(" \n file after writing \n");
    while((c=getc(fptr) )!= EOF)
    { 
    printf("%c",c);
    }
    fclose(fptr);
    
    
    
    return 0;
}
