/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q2) Write a C program to read roll no, name and marks of three subjects
and calculate the total, percentage and division.
   */
#include<stdio.h>

int main()
{
   float roll_no, marks1, marks2, marks3;
   char name[15];
   printf("Enter your name and roll no.\n");
   scanf("%s %f", &name, &roll_no);
   printf("Enter three subjects marks out of 100 each\n");
   scanf("%f %f %f", &marks1, &marks2, &marks3);
   printf("marks1 = %f/100, marks2 = %f/100, marks3 = %f/100\n", marks1, marks2, marks3);

   float total = marks1 + marks2 +marks3;
   printf("Total marks is %f/300\n", total);
   float percent;
   percent = (total/300)*100;
   printf("%f%% precentage\n", percent);

   if(percent >= 90){
       printf("Division 'A'\n");
   }
   else if(75 <= percent <90){
       printf("Division 'B'\n");
   }
   else if(50 <= percent < 75){
       printf("Division 'C'\n");
   }
   else{
       printf("Division 'D'\n");
   }

   return 0;
}