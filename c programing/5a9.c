/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q8)
   */
#include<stdio.h>

int main()
{
   int n, sum = 0;
   printf("Enter five digits no.");
   scanf("%d", &n);
   while(n>0){
       int num = n%10;
       sum += num;
       n = n/10;
   }
   printf("sum of the digits of n is %d", sum);

   return 0;
}