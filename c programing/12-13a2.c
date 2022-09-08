/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q2)
*/
int square(int n){
    return n*n;
}
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number you want square of\n");
    scanf("%d", &n);

    printf("Square of %d is: %d\n", n, square(n));

   return 0;
}