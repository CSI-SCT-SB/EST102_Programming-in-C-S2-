#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[100], d[100];
    FILE *f;
    f=fopen("first.txt", "a+");
    printf("\nText to be appended");
    fgets(a,100,stdin);
    fprintf(f,"%s",a);
    fclose(f);
    f=fopen("first.txt", "r");
    printf("\nAfter Appending \n");
    while(fgets(d,sizeof(d),f)!=NULL)
    {
        printf("%s",d);
    }
    fclose(f);

}
