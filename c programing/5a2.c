/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q2) write a program to find roots of Quadratic equation
   */
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, r1, r2, d;
    printf("Enter the value of A, B, C in Enq Ax^2 + Bx + c=0\n");
    scanf("%f %f %f", &a, &b, &c);

    d = (b * b) - (4 * a * c);
    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("The real roots of quadratic eqn are %f %f", r1, r2);
    }
    else if (d == 0)
    {
        r1 = r2 = -b / (2 * a);
        printf("Roots are real %f %f", r1, r2);
    }
    else
    {
        printf("Roots are imaginary");
    }

    return 0;
}