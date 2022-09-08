/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q10)
*/
#include<stdio.h>

int sumofdigits(int a){
    if(a==0)
    return 0;
    return((a%10) + sumofdigits(a/10));
}
int main()
{
    int n;
    printf("Enter the n to find its sum of digits : ");
    scanf("%d", &n);
    int sum;
    sum = sumofdigits(n);
    printf("Sum of digits of number is : %d", sum);

   return 0;
}