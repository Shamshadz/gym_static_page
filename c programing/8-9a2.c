/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q2) Write a program in C to display n terms of natural number and their sum.
*/
#include<stdio.h>

int main()
{
    int n, sum;
    printf("Enter the natural number n to find its sum\n");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("%d\n", i);
    }
    sum = (n*(n+1))/2;
    printf("Sum of the %d natural no. is %d\n", n, sum);

   return 0;
}