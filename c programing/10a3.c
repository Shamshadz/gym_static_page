/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q3)
*/
#include <stdio.h>

int main()
{
  int values[100];
  int s1, count=0;
  printf("Enter the no. of arr want to print\n");
  scanf("%d", &s1);

  printf("Enter integers: \n");

  for(int i = 0; i < s1; i++) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers: \n");

  for(int i = 0; i < s1; i++) {
     printf("Element-%d: %d\n", i, values[i]);
  }

   for(int j=0;j<s1;j++){
      for(int k=j+1;k<s1;k++){
        if(values[j] == values[k]){
         count++;
                }
         printf("values[%d]= '%d' frequency is '%d'\n", j, values[j], count);

      }
   }

    return 0;
}