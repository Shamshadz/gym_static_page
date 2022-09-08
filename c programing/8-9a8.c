/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q8) Write a program in C to print the Floyd's Triangle.
*/
#include<stdio.h>

int main()
{
   int n;
   printf("Enter the value to print floyd triangle\n");
   scanf("%d", &n);

   for(int i=1;i<=n;i++){
      if(i%2==0){
         for (int j=1; j<=i;j++)
         {
            if (j%2==0)
            {
               printf("1 ");
            }
            else{
               printf("0 ");
            }
         }
         
      }
      else{
         for (int j=1; j<=i;j++)
         {
            if (j%2==0)
            {
               printf("0 ");
            }
            else{
               printf("1 ");
            }
         }
      }
      printf("\n");
   }

   return 0;
}