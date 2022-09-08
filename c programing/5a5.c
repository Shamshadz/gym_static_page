/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q5) Write C program to find out area of circle,
   perimeter of circle, area of rectangle, area of triangle, perimeter of triangle.
   */
#include<stdio.h>
#include<math.h>

int main()
{
   float r, area, perimeter;
   printf("Enter radius of circle\n");
   scanf("%f", &r);
   area = 3.14*pow(r, 2);
   perimeter = 2*3.14*r;
   printf("Area of cirle is %0.2f sq.m\n", area);
   printf("perimeter of circle is %0.2f m\n", perimeter);

   float l, b;
   printf("Enter the value of length and breadth\n");
   scanf("%f %f", &l, &b);
   printf("Area of Rectangle is %f sq.m\n", l*b);
   
   float x, y, z;
   printf("Enter the lengths of sides Triangle\n");
   scanf("%f %f %f", &x, &y, &z);
   float s = (x+y+z)/2;
   float area1 = sqrt(s*(s-x)*(s-y)*(s-z));
   printf("Area of triangle is %f\n", area1);
   printf("Perimeter of triangle is %f\n", s*2);

   return 0;
}