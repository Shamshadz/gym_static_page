/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q7)
   */
#include<stdio.h>

int main()
{
   float d;
   printf("Enter the Distance in km between two cities");
   scanf("%f", &d);

   printf("Distance in meters is %f m\n", d*1000);
   printf("Distance in feets is %f foot\n", d*3280.84);
   printf("Distance in inches is %f inh\n", d*39370.1);
   printf("Distance in centimeter is %f cm\n", d*100000);

   return 0;
}