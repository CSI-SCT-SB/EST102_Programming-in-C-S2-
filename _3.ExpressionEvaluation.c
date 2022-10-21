/*Program to evaluate the arithmetic expression((a-b/c*d+e)*(f+g)) */
#include<stdio.h>
int main() {
float a,b,c,d,e,f,g,s; //Variable declaration
printf("Enter the values of a\n");
scanf("%f",&a);//Input value of a
printf("Enter the values of b\n");
scanf("%f",&b);//Input value of b
printf("Enter the values of c\n");
scanf("%f",&c);//Input value of c
printf("Enter the values of d\n");
scanf("%f",&d);//Input value of d
printf("Enter the values of e\n");
scanf("%f",&e);//Input value of e
printf("Enter the values of f\n");
scanf("%f",&f);//Input value of f
printf("Enter the values of g\n");
scanf("%f",&g);//Input value of g
s=((a-b/c*d+e)*(f+g));//Evaluate the expression
printf("\n The Solution of the expression is=%f",s);
return(0);
}
