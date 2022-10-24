#include <stdio.h>
#include <stdlib.h>

int main()
{
char str[100];
int i;
int space=0;
    printf("Enter a string\n");

    gets(str);
    i=0;
    while(i<=str[i]){
 if(str[i]==' '){
        space++;
    }
    i++;
}

printf("Total white space :%d ",space);
getch();
    return 0;
}
