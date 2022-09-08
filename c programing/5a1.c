/* Name: Choudhary Shamshad Mubarak Ali 
   Roll no: 17
   Division: B | b1
   Q1) write a program to calculate simple and compound intrest
   */
#include<stdio.h>
#include<math.h>

int main()
{
   float p, r, n, si, ci;
   scanf("%f %f %f", &p, &r, &n);
   
   si = (p*r*n)/100;
   printf("The simple intrest value is %0.2f\n", si);

   float middle = 1 + r/100;
   float power = pow(middle, n);
   ci =(p*power) - p;
   printf("The value of compound intrest is %0.2f", ci);

   return 0;
}