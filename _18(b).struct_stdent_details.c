#include<stdio.h>

struct student
{
    int roll;
    char name[30];
    int mark_for_c[20];
};

int main()
{
    int i,n;
    float avg;
    
    struct student st;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Enter the name\n");
        scanf("%s",st.name);
        printf("Enter roll no\n");
        scanf("%d",&st.roll);
        printf("Enter marks for c\n");
        scanf("%d",&st.mark_for_c[i]);
    }
    
    int total=0;
    for(i=0;i<n;i++)
    {
        total=total+st.mark_for_c[i];
    }
    avg = total/n;
    printf("Average marks in c is: %f",avg);
    
    return 0;
}