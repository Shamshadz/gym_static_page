/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q1)
*/
#include<stdio.h>
#include<stdlib.h>
#define max 1000

int main()
{
    char str[max];
    FILE *fptr=NULL;
    char fname[20]="test.txt";

    printf("creating test.txt file\n");
    fptr = fopen(fname,"w");

    printf("Input the content in file\n");
    fgets(str,sizeof str,stdin);
    fprintf(fptr,"%s",str);
    fclose(fptr);
    printf("File is created successfully\n");

   return 0;
}