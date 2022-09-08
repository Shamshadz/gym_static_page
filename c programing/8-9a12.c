/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q12) No. is Palindrome or not.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int a, r, n, count = 1, temp = 0;
    printf("Enter a No. is Palindrome or not: ");
    scanf("%d", &n);

    while (n > 0)
    {
        a = n % 10;
        n = n / 10;
        count++;
    }
    for (int i = count; i > 0; i--)
    {
        r = n % 10;
        n = n / 10;
        temp += r * pow(10, i);
    }
    if (temp == n)
    {
        printf("Its Palindrome No.\n");
    }
    else
    {
        printf("Its not Palindrome No.\n");
    }

    return 0;
}