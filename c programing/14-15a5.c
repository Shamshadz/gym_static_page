/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q5) 
*/
#include<stdio.h>

int main()
{
   char str[1000];
   char c;
   int ctr = 0;
   FILE *ptr = NULL;
   ptr = fopen("test.txt","r");
   
   for(c = getc(ptr);c != EOF;c = getc(ptr))
      if(c == '\n')
         ctr = ctr +1;

   printf("Number of lines in FILE is : %d", ctr);
   fclose(ptr);

   return 0;
}