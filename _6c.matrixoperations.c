#include <stdio.h>
int i,j;
void input(int A[20][20], int B[20][20],int r,int c){
    printf("Enter elements of matrix1 \n");
    for(i=0;i<r;i++)
      {
        for(j=0;j<c;j++){
         scanf("%d",&A[i][j]);
        }
    }
    printf("Enter elements of matrix2 \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
        scanf("%d",&B[i][j]);
        }
    }
}
void display(int A[20][20],int r,int c)
    {
    printf("The resulting matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
        printf("%d \t",A[i][j]);
        }
        printf("\n");
    }
}
void add(int A[20][20], int B[20][20],int r,int c)
    {
    int s[20][20];
    for(i=0;i<r;i++)
      {
        for(j=0;j<c;j++)
        {
            s[i][j] = A[i][j]+B[i][j];
        }
    }
    display(s,r,c);
}
void multiply(int A[20][20], int B[20][20],int r,int c)
    {
    if(r==c)
     {
        int m[20][20];
       for(i=0;i<r;i++)
         {
          for(j=0;j<c;j++)
               {
    		  m[i][j]=0;
                for(int k=0;k<r;k++)
                {
                  m[i][j]+=(A[i][k]*B[k][j]);
                }
            }
        }
        printf("The product of the matrices is:\n");
        display(m,r,c);
	}
	else
	printf("Error! These matrices cannot be multiplied");

}
void trans(int A[20][20],int r,int c)
    {
    int trans[20][20];
    for(i=0;i<r;i++)
      {
	for(j=0;j<c;j++)
        {
	trans[j][i]=A[i][j];}
	printf("\nTranspose of the given matrix is:\n");
	display(trans,c,r);
        }
       }
}


int main()
{
    int A[20][20],B[20][20],r,c,n;
    printf("Enter number of rows and columns of matrix\n");
    scanf("%d%d",&r,&c);
    printf("Input two matrices.\n");
    input(A,B,r,c);
    do
      {
       printf("Menu\n1.Add\n2.Multiply\n3.Transpose\n4.Exit\nEnter your option(number!)\n");
       scanf("%d",&n);
       switch(n)
           {
           case 1:add(A,B,r,c);break;
           case 2:multiply(A,B,r,c);break;
               case 3:{printf("Which matrix to be transposed? (1or2)\n");
                    scanf("%d",&n);
                    if(n==1)
                     trans(A,r,c);
                    else trans(B,r,c);
                        break;
                   
               }
           case 4:break;
           default:printf("Ivalid option");
       }
    }
    while(n!=4);
    return 0;
}

