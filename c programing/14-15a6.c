/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q6) 
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[1000];
    FILE *ptr = NULL;
    ptr = fopen("test.txt","r");
    fprintf(ptr,"%s",str);

    fclose(ptr);

   return 0;
}