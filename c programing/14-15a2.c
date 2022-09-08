/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q2) Write a program in C to read an existing file. 
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[100];
    FILE *fptr = NULL;
    printf("Opening a test.txt file\n");
    fptr = fopen("test.txt","r");
    fscanf(fptr,"%s",str);
    printf("The content in the file is : %s", str);
    fclose(fptr);

   return 0;
}