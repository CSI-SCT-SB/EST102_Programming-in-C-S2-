#include <stdio.h>
struct Point
{
int x;
int y;
}p1,p2,p3;
int main()
{
  printf("first point(x1,y1)\n"); 
  scanf("%d,%d",&p1.x,&p1.y);
  printf("second point(x2,y2)\n"); 
  scanf("%d,%d",&p2.x,&p2.y);
  p3.x=p1.x+p2.x;
  p3.y=p1.y+p2.y;
  printf("Sum of Distance\n");
  printf("(%d,%d)\n",p3.x,p3.y);
}
