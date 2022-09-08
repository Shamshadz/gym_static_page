/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q3)
   */
#include <stdio.h>
int main()
{
   int tmp = 42;

   printf("days temperature : %d\n", tmp);
   
   if (tmp < 0)
      printf("Freezing weather.\n");
   else if (tmp < 10)
      printf("Very cold weather.\n");
   else if (tmp < 20)
      printf("Cold weather.\n");
   else if (tmp < 30)
      printf("Normal in temp.\n");
   else if (tmp < 40)
      printf("Its Hot.\n");
   else
      printf("Its very hot.\n");
   
   return 0;
}
