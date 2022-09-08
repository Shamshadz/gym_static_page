/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q4)
*/
#include <stdio.h>

int main()
{
   int arr1[100], s1, temp;
   printf("Enter the size of arry\n");
   scanf("%d", &s1);
   for (int i = 0; i < s1; i++){
      printf("\nEnter the element %d : ", i);
      scanf("%d", &arr1[i]);
   }
   for (int j = 0; j < s1; j++)
   {
      for (int k = 0; k < s1-1; k++)
      {
         if (arr1[k] >= arr1[k + 1])
         {
            temp = arr1[k];
            arr1[k] = arr1[k + 1];
            arr1[k + 1] = temp;
         }
      }
   }
   printf("max = %d\n min = %d\n", arr1[s1 - 1], arr1[0]);

   return 0;
}