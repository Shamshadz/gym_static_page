/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q3) Write a program in C to write multiple lines in a text file
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, n;
   char fname[20] = "test.txt";
   char str[100];
   FILE *fptr = NULL;
   printf(" Input the number of lines to be written : ");
   scanf("%d", &n);
   printf("\n :: The lines are ::\n");
   fptr = fopen(fname, "w");
   for (i = 0; i < n + 1; i++)
   {
      fgets(str, sizeof str, stdin);
      fputs(str, fptr);
   }

   fclose(fptr);

   return 0;
}