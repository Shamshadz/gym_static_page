/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q1)
*/
#include <stdio.h>

int main() {
  int values[10];

  printf("Enter 10 integers: \n");

  for(int i = 0; i < 10; i++) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers: \n");

  for(int i = 0; i < 10; i++) {
     printf("Element-%d: %d\n", i, values[i]);
  }      
  return 0;
}
