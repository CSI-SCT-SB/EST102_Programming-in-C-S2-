#include<stdio.h>
void main()
{
FILE *f;
char ch;
int V=0;int W=0,L=0;
int charac=0;
f=fopen("abcde.txt","w");  
   while((ch=getchar()) != EOF)
    {
        putc(ch,f);
    }
    fclose(f);

f=fopen("abcde.txt","r");
while((ch=fgetc(f)) != EOF)

{

if(ch == ' ' || ch=='\t' || ch=='\n'  )
{
W++;
}
if(ch == '\n')
{
    L++;
    
}
charac=charac+1;

}
printf("characters=%d \n",charac);
printf("\n words = %d\n",W);
printf("Lines = %d",L);
fclose(f);
f=fopen("output.txt","w"); 
fprintf(f,"characters=%d \n",charac);
fprintf(f," words = %d\n",W);
fprintf(f,"Lines = %d",L);
fclose(f);
}
