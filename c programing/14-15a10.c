/* Name: Choudhary Shamshad Mubarak Ali
   Roll no: 17
   Division: B | b1
   Q10)
*/
#include <stdio.h>

int main ()
{
  FILE * fptr;
  int i,n;
  char str[100];
  char fname[20];
  char str1;
  
	printf("\n\n Append multiple lines at the end of a text file :\n");
	printf(" Input the file name to be opened : ");
	scanf("%s",fname);		
    fptr = fopen(fname, "a"); 
    printf(" Input the number of lines to be written : ");
    scanf("%d", &n);
    printf(" The lines are : \n");  
    for(i = 0; i < n+1;i++)
    {
    fgets(str, sizeof str, stdin);
    fputs(str, fptr);
  }
  fclose (fptr);
	fptr = fopen (fname, "r");  
	printf("\n The content of the file %s is  :\n",fname);
	str1 = fgetc(fptr);
	while (str1 != EOF)
		{
			printf ("%c", str1);
			str1 = fgetc(fptr);
		}
    printf("\n\n");
    fclose (fptr);
  return 0;
}
