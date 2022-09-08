/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q14) Write a program in C to add numbers using call by reference
*/
#include<stdio.h>

int sum(int *p ,int *q){
    return *p + *q ;
}

int main()
{
    int a, b;
    printf("Enter the two no. to add : ");
    scanf("%d %d", &a, &b);
    
    printf("The sum of the two value is : %d", sum(&a, &b));

   return 0;
}