/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q3) Develop a Program to read a number. Check whether it is divisible by 7 or not.
   */
#include<stdio.h>

int main()
{
   int n;
   printf("Enter positive integer no.: ");
   scanf("%d", &n);
   printf("your enter no. is %d\n", n);
   if(n%7==0){
       printf("entered no. %d is divisible by 7", n);
   }
   else{
       printf("entered no. %d is not divisible by 7", n);
   }

   return 0;
}