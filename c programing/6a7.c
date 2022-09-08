/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q6)
   */
#include<stdio.h>

int main()
{
   int age1, age2, age3;
   printf("Enter age of Ram, Shyam and Ajay");
   scanf("%d %d %d", &age1, &age2, &age3);

   if(age1<age2 && age1<age3){
       printf("The youngest among three is Ram of age %d", age1);
   }
   else if(age2<age1 && age2<age3){
       printf("The youngest among three is Shyam of age %d", age2);
   }
   else{
       printf("The youngest among three is Ajay of age %d", age3);
   }

   return 0;
}