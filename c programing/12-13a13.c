/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q13) Write a program in C to show the basic declaration of pointer
*/
#include<stdio.h>

int main()
{
    int a =12;
    int *p = &a;

    printf("The value of a = %d\n", a);
    printf("The value of a = %d\n",  *p);
    printf("The address of a = %d\n",  p);
    printf("The address of a = %d\n",  &a);


   return 0;
}