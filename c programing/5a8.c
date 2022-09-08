/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q8)
   */
#include<stdio.h>

int main()
{
   float fahrenheit, centigrade;
   printf("Enter the value of tempreature in fahrenheit: ");
   scanf("%f", &fahrenheit);
   centigrade = (5*(fahrenheit - 32))/9;
   printf("The value of tempreature in centigrade is %f", centigrade);

   return 0;
}