/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q6)
   */
#include<stdio.h>

int main()
{
   float salary;
   printf("Enter your basic salary\n");
   scanf("%f", &salary);
   float gs = salary - (0.2*salary) + (0.4*salary);
   printf("The gross salary after rent allowane and DA is Rs %f\n", gs);

   return 0;
}