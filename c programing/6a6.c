/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q6)
   */
#include<stdio.h>

int main()
{
    int pf, ls, sp, cp;
    printf("Enter the cost price and selling price in Rs\n");
    scanf("%d %d", &cp, &sp);
    pf = sp - cp;
    ls = cp - sp;
    if (pf > 0)
    {
        printf("Your are in profit of Rs: %d", pf);
    }
    else if (ls > 0)
    {
        printf("Your are in loss of Rs: %d", ls);
    }
    else
    {
        printf("Your are neither in profit nor in loss");
    }

    return 0;
}