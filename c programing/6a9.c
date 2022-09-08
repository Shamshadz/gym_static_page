/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q9)
   */
#include<stdio.h>

int main()
{
   float x1, y1, x2, y2, x3, y3;
   printf("Enter the coordinate(x1,y1) to know if it is colinear\n");
   scanf("%f %f", &x1, &y1);
   printf("Enter the coordinate(x2,y2) to know if it is colinear\n");
   scanf("%f %f", &x2, &y2);
   printf("Enter the coordinate(x3,y3) to know if it is colinear\n");
   scanf("%f %f", &x3, &y3);

   float area = x1*(y2 - y3) - y1*(x2 - x3) + (x2*y3 - y2*x3);
   if(area == 0){
       printf("yes, three coordinates lie on same line");
   }
   else{
       printf("no, three coordinates do not lie on same line");
   }

   return 0;
}