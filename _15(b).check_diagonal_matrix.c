#include<stdio.h>

int main()
{
    int arr[10][10],i,j,row,column,flag=0;
    
    printf("Enter the number of rows and columns\n");
    scanf("%d %d",&row,&column);
    
    printf("Enter the matrix elements\n");//read the matrix elements from user.
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(i!=j && arr[i][j]!=0)
            {
                 flag = 1;
                 break;
            }
             
        }
    }
    
    //Printing the matrix
    printf("the matrix is \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
            
    if(flag==0)
    {
        printf("Its a diagonal matrix");
    }
    else{
        printf("Not a diagonal matrix");
    }
    return 0;
}