#include <stdio.h>
#include <math.h>
int main(){
  int N = 0, L = 1 , S = 0, i = 0;
  printf("Input a natural number: \n");
  scanf("%d", &N);
   while(N / pow(10,L) >= 1){            //loop to get number of digits 'L'
     L++;
   }
   for (i = 0; i < L; i++){              //loop to add digits^L
     S += pow((int)((N / pow(10, i))) % 10, L);
   }
   if (N == S){
     printf("Number is armstrong");
   }
   else{
     printf("Number is not armstrong");
   }
   return 0;
}
