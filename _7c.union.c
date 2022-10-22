#include<stdio.h>
#include<string.h>
#define C_SIZE 10
union data
{ char name[C_SIZE];
  char housename[C_SIZE];
  char cityname[C_SIZE];
  char state[C_SIZE];
  int pincode;
}d1;
int main()
{
    printf("USER DATA \n");
    strcpy( d1.name,"Rohith");
    printf("Name %s \n ",d1.name);
    strcpy( d1.housename,"gayathri");
    printf("House name %s\n",d1.housename);
    strcpy( d1.cityname,"Trivandrum");
    printf("City name %s\n", d1.cityname);
    strcpy(d1.state,"kerala");
    printf("State %s \n",d1.state);
    d1.pincode=695013;
    printf("pincode %d \n",d1.pincode);
   return 0;
}
