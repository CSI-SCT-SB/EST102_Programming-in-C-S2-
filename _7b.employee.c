#include<stdio.h>
struct employee
{ char name[10];
  int id;
  int salary;
};
int main()
{
  int n;
  printf("Enter the number of Employees");
  scanf("%d",&n);

  struct employee emp[n];

for(int i=0;i<n;i++)
{
    printf("Enter the name of Employee %d",i+1);
    scanf("%s",emp[i].name);
    printf("Enter the employee ID of Employee %d",i+1);
    scanf("%d",&emp[i].id);
    printf("Enter the salary of Employee %d",i+1);
    scanf("%d",&emp[i].salary);
}
printf("EMPLOYEE DETAILS \n");
for(int i=0;i<n;i++)
{
    printf("Employee number \t  %d \n",i+1);
    printf("NAME: %s \n",emp[i].name);
    printf("EMPLOYEE ID: %d \n",emp[i].id);
    printf("SALARY: %d \n",emp[i].salary);
}
return (0);
}
