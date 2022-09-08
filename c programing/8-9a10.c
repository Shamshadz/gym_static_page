/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q10) Armstrong number checker.
*/
#include <stdio.h>
int main()
{
    int n, r, sum = 0, temp;
    printf("enter the number=");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (temp == sum)
        printf("armstrong  number ");
    else
        printf("not armstrong number");
        
    return 0;
}